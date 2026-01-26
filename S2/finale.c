#include <stdio.h>

void minmax(int t[], int n)
{
    int min = t[0];
    int max = t[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (t[i] < min)
            min = t[i];

        if (t[i] > max)
            max = t[i];
    }

    printf("Le minimum est : %d\n", min);
    printf("Le maximum est : %d\n", max);
}

int main()
{
    int t[5];
    int n = 5;
    int i;

    printf("Entrez 5 nombres :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    printf("Ma liste est : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", t[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    minmax(t, n);

    return 0;
}