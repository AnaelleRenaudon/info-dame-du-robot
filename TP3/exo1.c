#include <stdio.h>
#include <stdlib.h>

void print_char(char c) {
    putchar(c);
}

void *allocate(size_t size) {
    return malloc(size);
}

int main() {
    int n;
    printf("Entrez la taille entre 5 et 10 : ");
    if (scanf("%d", &n) != 1 || n < 5 || n > 10)
        return 0;

    int width = n * n;
    int height = 3 * n - 1;

    char *image = (char *)allocate(width * height);
    if (!image) return 0;

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            image[i * width + j] = ' ';

    int center = width / 2;
    int line = 0;

    for (int i = 0; i < n && line < height; i++, line++) {
        int left = center - i;
        int right = center + i;
        image[line * width + left]  = 'A';
        image[line * width + right] = 'A';
        for (int j = left + 1; j < right; j++)
            image[line * width + j] = 'S';
    }

    if (line > 0) {
        int top = line - 1;
        for (int j = 0; j < width; j++)
            if (j < center - n || j > center + n)
                image[top * width + j] = '_';
    }

    if (line < height) {
        for (int j = 0; j < width; j++)
            image[line * width + j] = (j == 0 || j == width - 1) ? '"' : 'S';
        line++;
    }

    int inner = n / 2;
    int left0 = center - ((n - 1) - inner);
    int right0 = center + ((n - 1) - inner);

    int mid_lines = height - line - n;
    int min_w = right0 - left0 + 1;
    if (min_w < 5) min_w = 5;

    int len = width;

    for (int k = 0; k < mid_lines && line < height; k++, line++) {
        if (len > min_w) len -= 2; else len = min_w;
        int start = center - len / 2;
        int end = start + len - 1;
        if (start < 0) start = 0;
        if (end >= width) end = width - 1;

        image[line * width + start] = '\'';
        if (start + 1 <= end) image[line * width + start + 1] = 'v';
        if (end - 1 >= start) image[line * width + end - 1] = 'v';
        image[line * width + end] = '\'';

        for (int j = start + 2; j <= end - 2; j++)
            image[line * width + j] = 'S';
    }

    int extra = n / 2;

    for (int i = 0; i < n && line < height; i++, line++) {
        int sz = n - i;
        int left = left0 - i;
        int right = right0 + i;
        int tipL = left - (sz - 1) - (sz >= 2 ? extra : 0);
        int tipR = right + (sz - 1) + (sz >= 2 ? extra : 0);

        if (tipL >= 0)
            image[line * width + tipL] = '.';

        for (int j = tipL + 1; j < left; j++)
            if (j >= 0 && j < width) image[line * width + j] = 'S';

        if (sz >= 2 && left >= 0 && left < width)
            image[line * width + left] = '"';

        if (sz >= 2 && right >= 0 && right < width)
            image[line * width + right] = '"';

        for (int j = right + 1; j < tipR; j++)
            if (j >= 0 && j < width) image[line * width + j] = 'S';

        if (tipR < width)
            image[line * width + tipR] = '.';
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            print_char(image[i * width + j]);
        print_char('\n');
    }

    free(image);
    return 0;
}



