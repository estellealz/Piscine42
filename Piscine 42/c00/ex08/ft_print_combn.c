#include <unistd.h>

// Fonction pour incrémenter la combinaison
void incrementer(char *combo, int n);

// Fonction récursive auxiliaire pour incrémenter la combinaison
void incrementer_recursif(char *combo, int k, int i);

// Fonction pour imprimer la combinaison de nombres
void imprimer_nombres(char *combo, int n);

// Fonction pour imprimer un caractère
void imprimer_char(char c);

// Fonction pour imprimer les combinaisons de n nombres
void ft_imprimer_combinaisons(int n)
{
    char combo[9];
    int i = 0;

    // Initialiser la combinaison
    while (i < n)
    {
        combo[i] = (char)i + 48;
        i++;
    }

    // Imprimer la combinaison initiale
    imprimer_nombres(combo, n);

    // Générer et imprimer toutes les combinaisons
    while (combo[0] <= '9' - n || combo[n - 1] < '9')
    {
        incrementer(combo, n);
        imprimer_nombres(combo, n);
    }
}

// Fonction pour incrémenter la combinaison
void incrementer(char *combo, int n)
{
    int i;
    int k = 0;

    i = n - 1;
    incrementer_recursif(combo, k, i);
}

// Fonction récursive auxiliaire pour incrémenter la combinaison
void incrementer_recursif(char *combo, int k, int i)
{
    if (combo[i - k] < '9' - k)
    {
        combo[i - k]++;
    }
    else
    {
        k++;
        if (k <= i)
        {
            incrementer_recursif(combo, k, i);
            combo[i - k + 1] = combo[i - k] + 1;
        }
    }
}

// Fonction pour imprimer la combinaison de nombres
void imprimer_nombres(char *combo, int n)
{
    int i = 0;
    while (i < n)
    {
        imprimer_char(combo[i]);
        i++;
    }
    if (combo[0] <= '9' - n && combo[n - 1] <= '9')
    {
        imprimer_char(',');
        imprimer_char(' ');
    }
}

// Fonction pour imprimer un caractère
void imprimer_char(char c)
{
    write(1, &c, 1);
}
