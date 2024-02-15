#include <unistd.h>

// Fonction pour imprimer l'alphabet en ordre inverse
void ft_print_reverse_alphabet(void)
{
    char c;  // Déclaration d'une variable de type char nommée c

    c = 'z';  // Initialisation de c avec la dernière lettre de l'alphabet, 'z'

    // Boucle while pour parcourir les lettres de l'alphabet de 'z' à 'a'
    while (c >= 'a')
    {
        // Utilisation de l'appel système write pour écrire le caractère actuel c sur la sortie standard (1)
        write(1, &c, 1);

        c--;  // Décrémentation de c pour passer à la lettre précédente de l'alphabet
    }
}
