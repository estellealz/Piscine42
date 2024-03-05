#include <unistd.h>

// Fonction pour échanger les valeurs de deux entiers
void ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

// Fonction pour trier un tableau d'entiers par ordre décroissant
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = 0;
    
    // Parcourt le tableau
    while (i < size)
    {
        // Parcourt le tableau à partir de la position i
        while (j < size)
        {
            // Vérifie si l'élément à la position j est plus grand que l'élément à la position i
            if (tab[j] > tab[i])
            {
                // Appelle la fonction ft_swap pour échanger les éléments non triés
                ft_swap(&tab[i], &tab[j]);
            }
            j++;
        }
        j = 0;
        i++;
    }
}
