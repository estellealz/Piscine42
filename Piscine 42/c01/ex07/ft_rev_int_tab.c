#include <unistd.h>

// Fonction pour échanger les valeurs de deux entiers
void ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

// Fonction pour inverser un tableau d'entiers
void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while (i < size / 2)
    {
        // Appelle la fonction ft_swap pour échanger les éléments symétriques
        ft_swap(&tab[i], &tab[size - i - 1]);
        i++;
    }
}
