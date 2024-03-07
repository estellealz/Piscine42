// Fonction pour vérifier si tous les caractères d'une chaîne sont numériques
int ft_str_is_numeric(char *str)
{
    int i = 0;
    
    // Parcourt la chaîne
    while (str[i] != '\0')
    {
        // Vérifie si le caractère n'est pas un chiffre (0-9)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0; // Si un caractère n'est pas numérique, renvoie 0
        i++;
    }
    
    return 1; // Si tous les caractères sont numériques, renvoie 1
}
