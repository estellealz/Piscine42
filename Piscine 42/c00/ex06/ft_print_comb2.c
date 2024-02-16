#include <unistd.h>

void print_2digits(char *combo, int n);
void ft_putchar(char c);
void increment(char *combo);

void ft_print_comb2(void)
{
    char combo[2];

    combo[0] = 0;
    combo[1] = 1;
    
    // Boucle principale pour parcourir toutes les paires
    while (combo[0] < 99)
    {
        // Imprimer les deux chiffres de la paire
        print_2digits(combo, 0);
        ft_putchar(' ');
        print_2digits(combo, 1);

        // Ajouter une virgule et un espace, sauf pour la dernière paire
        if (combo[0] < 98)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }

        // Incrémenter vers la paire suivante
        increment(combo);
    }
}

// Imprimer les deux chiffres de la paire actuelle
void print_2digits(char *combo, int n)
{
    char ascii_offset = 48; // Valeur ASCII de '0'

    if (combo[n] < 10)
    {
        // Si le chiffre est inférieur à 10, ajouter un zéro avant
        ft_putchar('0');
        ft_putchar(combo[n] + ascii_offset);
    }
    else
    {
        // Sinon, imprimer les deux chiffres
        ft_putchar(combo[n] / 10 + ascii_offset);
        ft_putchar(combo[n] % 10 + ascii_offset);
    }
}

// Incrémenter la paire vers la suivante
void increment(char *combo)
{
    combo[1]++;
    if (combo[1] > 99)
    {
        combo[0]++;
        combo[1] = combo[0] + 1;
    }
}

// Imprimer un caractère
void ft_putchar(char c)
{
    write(1, &c, 1);
}
