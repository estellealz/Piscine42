// Fonction pour vérifier si tous les caractères d'une chaîne sont en minuscules
int ft_str_is_lowercase(char *str)
{
    int i = 0;
    
    // Parcourt la chaîne
    while (str[i] != '\0')
    {
        // Vérifie si le caractère n'est pas une lettre minuscule
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0; // Si un caractère n'est pas en minuscule, renvoie 0
        i++;
    }
    
    return 1; // Si tous les caractères sont en minuscules, renvoie 1
}
