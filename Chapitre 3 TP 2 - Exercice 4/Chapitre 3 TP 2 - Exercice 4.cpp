#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#define _CRT_SECURE_NO_WARNINGS

void lire(int tab[20]);
void affiche(int tab[20]);
void indice_min(int tab[20]);

void main(int argc, char argv[])
{
	int tab[20];
	printf("Tableau a trier par ordre croissant\n");
	lire(tab);
	printf("\nValeurs du tableau  \n");
	affiche(tab);
	printf("\nValeur du tableau trie par ordre croissant  \n");
	indice_min(tab);
	_getch();
}

void lire(int tab[20])
{
	int i;
	for (i = 0; i < 20; i++)
	{
		printf("\nEntrez une valeur\n");
		scanf("%d", &tab[i]);
	}
}

void affiche(int tab[20])
{
	int i;
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", tab[i]);
	}
}

void indice_min(int tab[20])
{
	int i, j, tmp;
	for (i = 0; i < 20; i++)
	{
		j = i;
		while (j > 0 && tab[j - 1] > tab[j])
		{
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
			j--;
		}
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", tab[i]);
	}
}