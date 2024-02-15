#include <unistd.h>

// Fonction pour imprimer les chiffres de 0 à 9
void ft_print_numbers(void)
{
    char c;  // Déclaration d'une variable de type char nommée c

    c = '0';  // Initialisation de c avec le premier chiffre, '0'

    // Boucle while pour parcourir les chiffres de 0 à 9
    while (c <= '9')
    {
        // Utilisation de l'appel système write pour écrire le caractère actuel c sur la sortie standard (1)
        write(1, &c, 1);

        c++;  // Incrémentation de c pour passer au chiffre suivant
    }
}
