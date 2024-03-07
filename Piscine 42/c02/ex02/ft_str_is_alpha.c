// Fonction pour vérifier si tous les caractères d'une chaîne sont alphabétiques
int ft_str_is_alpha(char *str)
{
    int i = 0;
    
    // Parcourt la chaîne
    while (str[i] != '\0')
    {
        // Vérifie si le caractère n'est pas une lettre majuscule (A-Z) ni une lettre minuscule (a-z)
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            return 0; // Si un caractère n'est pas alphabétique, renvoie 0
        i++;
    }
    
    return 1; // Si tous les caractères sont alphabétiques, renvoie 1
}
