#include <unistd.h>

// Fonction pour copier une chaîne de caractères source dans une destination
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    
    // Parcourt la chaîne source
    while (src[i] != '\0')
    {
        // Copie chaque caractère de la source vers la destination
        dest[i] = src[i];
        i++;
    }
    
    // Ajoute le caractère de fin de chaîne à la destination
    dest[i] = '\0';
    
    // Renvoie la chaîne destination
    return dest;
}
