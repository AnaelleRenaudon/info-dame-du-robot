#include <stdio.h>

int main()
{
    int p;
    printf("Nombre de chiffres : ");
    scanf("%d", &p);

    for (int i = 1; i < 10000; i++)
    {
        int c = 0;
        int temp = i;
        while (temp > 0)
        {
            c++;
            temps /= 10;
        }
        if (c == p)
        {
            int somme = 0;
            temps = i;
            while (temp > 0)
            {
                int chiffre = temp % 10;
                int res = 1;
                for (int j = 0; j < c; j++)
                    res *= chiffre;
                somme += res;
                temp /= 10;
            }
            if (somme == i)
                printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
