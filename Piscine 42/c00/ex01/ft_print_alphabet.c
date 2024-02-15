#include <unistd.h>

// Fonction pour imprimer l'alphabet sur la sortie standard
void ft_print_alphabet(void)
{
    char i;  // Déclaration d'une variable de type char nommée i

    i = 'a';  // Initialisation de i avec la première lettre de l'alphabet, 'a'

    // Boucle while pour parcourir les lettres de l'alphabet de 'a' à 'z'
    while (i <= 'z')
    {
        // Utilisation de l'appel système write pour écrire le caractère actuel i sur la sortie standard (1)
        write(1, &i, 1);

        i++;  // Incrémentation de i pour passer à la lettre suivante de l'alphabet
    }
}
