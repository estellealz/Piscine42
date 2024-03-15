char *ft_strcat(char *dest, char *src)
{
    int i;  // Déclaration d'un compteur pour parcourir dest
    int j;  // Déclaration d'un compteur pour parcourir src

    i = 0;  // Initialisation du compteur pour dest
    while (dest[i])
        i++;  // Trouve la fin de la chaîne dest
    j = 0;  // Initialisation du compteur pour src
    while (src[j])
    {
        dest[i + j] = src[j];  // Copie chaque caractère de src à la fin de dest
        j++;
    }
    dest[i + j] = '\0';  // Ajoute le caractère de fin de chaîne à la nouvelle fin de dest
    return (dest);  // Renvoie dest, maintenant concaténée avec src
}
