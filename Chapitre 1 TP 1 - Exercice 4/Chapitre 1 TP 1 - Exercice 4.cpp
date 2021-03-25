#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int nb;
    float note, somme = 0;
    for (nb = 0; nb < 30; nb++)
    {
        printf("entre la note : ");
        scanf("%f", &note);
        somme = somme + note;
    }
    somme = somme / nb;

    printf("La moyenne est de %.1f ", somme);
    system("PAUSE");

    return 0;
}