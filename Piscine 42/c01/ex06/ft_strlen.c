#include <unistd.h>

// Fonction pour calculer la longueur d'une chaîne de caractères
int ft_strlen(char *str)
{
    int i = 0;
    // Parcours de la chaîne de caractères jusqu'au caractère nul '\0'
    while (str[i])
        i++;
    return (i); // Retourne le nombre de caractères dans la chaîne
}
