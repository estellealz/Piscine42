#include <unistd.h>

// Fonction pour déterminer si un nombre est négatif ou non
void ft_is_negative(int n)
{
    char cp;  // Caractère pour représenter 'Positif'
    char cn;  // Caractère pour représenter 'Négatif'

    cp = 'P';  // Initialisation avec le caractère 'P' pour Positif
    cn = 'N';  // Initialisation avec le caractère 'N' pour Négatif

    // Vérification si n est supérieur ou égal à zéro
    if (n >= 0)
    {
        // Utilisation de l'appel système write pour écrire 'P' sur la sortie standard (1)
        write(1, &cp, 1);
    }
    else
    {
        // Utilisation de l'appel système write pour écrire 'N' sur la sortie standard (1)
        write(1, &cn, 1);
    }
}
