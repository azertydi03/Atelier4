#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15

// comme etape 3 mais avec la graduation a gauche
// et des '.' pour les lignes de suivi
void afficher_ligne_histov(int tab[], int taille, float y)
{
    int j;

    printf("%5.1f | ", y);
    for (j = 0; j < taille; j++)
    {
        if (tab[j] >= y)
        {
            printf("xxx.");
        }
        else
        {
            printf("....");
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
        y = (float)maximum * (MAX_LIGNES - i) / MAX_LIGNES;
        afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }
    printf("      +---------------------------------------\n");

    // valeur de chaque barre en dessous
    printf("        ");
    for (i = 0; i < NB_VALEURS; i++)
    {
        printf("%3d ", valeurs[i]);
    }
    printf("\n");

    return 0;
}
