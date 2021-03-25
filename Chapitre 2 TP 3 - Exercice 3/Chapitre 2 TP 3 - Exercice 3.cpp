#include <stdio.h>
#include <string.h>
#define Max 200

void readchaine(char Tab[Max])
{
    int i = 0;
    char c;
    c = getchar();
    while ((c != '\n') && (i < Max))
    {
        Tab[i++] = c;
        c = getchar();
    }
    Tab[i] = '\0';
}

int main()
{
    char tab[Max];
    int x = 0, i, j, k, repete = 0;
    printf("entrez une chaine de caracteres :\n");
    readchaine(tab);

    for (i = 0; i < strlen(tab); i++)
    {
        for (j = 0; j < strlen(tab); j++) {
            if (tab[i] == tab[j])
                x++;
        }

        for (int x = 0; x < i; x++)
        {
            if (tab[i] == tab[x])
                repete++;
        }

        if (repete == 0 && tab[i] != ' ') printf("%d x la lettre %c\n", x, tab[i]);
        x = 0; repete = 0;
    }

    getchar();
}