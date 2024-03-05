#include <unistd.h>

// Fonction pour afficher un caractère
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Fonction pour afficher une chaîne de caractères
void ft_putstr(char *str)
{
    int i = 0;
    // Parcours de la chaîne de caractères jusqu'au caractère nul '\0'
    while (str[i])
    {
        ft_putchar(str[i]); // Affichage du caractère actuel
        i++;
    }
}
