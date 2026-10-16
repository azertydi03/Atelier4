#include <stdio.h>

#define NB_VALEURS 3

int main()
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int i;
    int j;

    // une ligne par valeur du tableau
    for (i = 0; i < NB_VALEURS; i++)
    {
        printf("| ");
        // on affiche autant de x que la valeur
        for (j = 0; j < valeurs[i]; j++)
        {
            printf("x");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-------------------------------------------------------\n");

    return 0;
}
