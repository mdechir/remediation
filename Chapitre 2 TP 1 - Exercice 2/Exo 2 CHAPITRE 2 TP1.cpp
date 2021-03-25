#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int tab1[10], tab2[10] = { -3,4,8,-7,3,8,6,-1,4,-9 };
    int i, j, k;

    printf("Tableaux 2:\n");
    for (k = 0; k < 10; k++)
    {
        printf("%d\t", tab2[k]);
    }


    j = 0;
    for (i = 0; i < 10; i++)
    {
        if (*(tab2 + i) > 0)
        {
            *(tab1 + j) = *(tab2 + i);
            j++;
        }

    }
    printf("Tableaux 1:\n");
    for (i = 0; i < j; i++)
        printf("%d\t", tab1[i]);
}