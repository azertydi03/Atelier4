#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main()
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int i;
    int j;
    int maximum;
    float echelle;
    int nb_x;

    // recherche du maximum
    maximum = valeurs[0];
    for (i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    // echelle : la plus grande barre fera MAX_LONGUEUR caracteres
    echelle = (float)MAX_LONGUEUR / maximum;

    for (i = 0; i < NB_VALEURS; i++)
    {
        nb_x = valeurs[i] * echelle;
        printf("| ");
        for (j = 0; j < nb_x; j++)
        {
            printf("x");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-------------------------------------------------------\n");

    return 0;
}
