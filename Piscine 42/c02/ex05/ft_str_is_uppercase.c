// Fonction pour vérifier si tous les caractères d'une chaîne sont en majuscules
int ft_str_is_uppercase(char *str)
{
    int i = 0;
    
    // Parcourt la chaîne
    while (str[i] != '\0')
    {
        // Vérifie si le caractère n'est pas une lettre majuscule
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0; // Si un caractère n'est pas en majuscule, renvoie 0
        i++;
    }
    
    return 1; // Si tous les caractères sont en majuscules, renvoie 1
}
