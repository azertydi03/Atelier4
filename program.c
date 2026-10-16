#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15

// affiche la ligne y de l'histogramme vertical
// une barre "xxx" si la valeur atteint y, sinon des espaces
void afficher_ligne_histov(int tab[], int taille, float y)
{
    int j;

    printf("| ");
    for (j = 0; j < taille; j++)
    {
        if (tab[j] >= y)
        {
            printf("xxx ");
        }
        else
        {
            printf("    ");
        }
    }
    printf("\n");
}

int main()
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };
    int i;
    int maximum;
    float y;

    // recherche du maximum (comme a l'etape 2)
    maximum = valeurs[0];
    for (i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > maximum)
        {
            maximum = valeurs[i];
        }
    }

    for (i = 0; i < MAX_LIGNES; i++)
    {
        // y descend de maximum jusqu'a maximum / MAX_LIGNES
        y = (float)maximum * (MAX_LIGNES - i) / MAX_LIGNES;
        afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }
    printf("+---------------------------------------\n");

    return 0;
}
