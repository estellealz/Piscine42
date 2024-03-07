#include <unistd.h>

// Fonction pour copier les n premiers caractères d'une chaîne source dans une destination
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    
    // Parcourt la chaîne source jusqu'à n caractères ou la fin de la chaîne
    while (src[i] != '\0' && i < n)
    {
        // Copie chaque caractère de la source vers la destination
        dest[i] = src[i];
        i++;
    }
    
    // Ajoute des caractères nuls supplémentaires à la destination si nécessaire
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    
    // Renvoie la chaîne destination
    return dest;
}
