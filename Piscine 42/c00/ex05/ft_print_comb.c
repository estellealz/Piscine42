#include <unistd.h>

void increment(char *combo);
void print_numbers(char *combo);
void ft_putchar(char c);

void ft_print_comb(void)
{
    char combo[3];

    // Initialisation de la première combinaison
    combo[0] = '0';
    combo[1] = '1';
    combo[2] = '2';

    // Boucle principale pour générer et imprimer les combinaisons
    while (combo[0] <= '7')
    {
        // Imprimer la combinaison actuelle
        print_numbers(combo);

        // Incrémenter vers la prochaine combinaison
        increment(combo);
    }
}

// Fonction pour incrémenter la combinaison actuelle
void increment(char *combo)
{
    combo[2]++; // Incrémenter l'unité

    if (combo[2] > '9')
    {
        combo[1]++; // Passer à la dizaine
        combo[2] = combo[1] + 1; // Réinitialiser l'unité

        if (combo[1] > '8')
        {
            combo[0]++; // Passer à la centaine
            combo[1] = combo[0] + 1; // Réinitialiser la dizaine
            combo[2] = combo[1] + 1; // Réinitialiser l'unité
        }
    }
}

// Fonction pour imprimer la combinaison actuelle
void print_numbers(char *combo)
{
    ft_putchar(combo[0]);
    ft_putchar(combo[1]);
    ft_putchar(combo[2]);

    // Imprimer la virgule et l'espace si ce n'est pas la dernière combinaison
    if (combo[0] < '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

// Fonction pour imprimer un caractère
void ft_putchar(char c)
{
    write(1, &c, 1);
}
