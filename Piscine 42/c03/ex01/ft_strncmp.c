int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;  // Déclaration d'un compteur pour parcourir les chaînes

    i = 0;  // Initialisation du compteur
    while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < (n - 1))
        i++;  // Parcourt les chaînes tant que les caractères sont égaux et que la longueur maximale n n'est pas dépassée
    if (n < 1)
        return (0);  // Si n est inférieur à 1, renvoie 0 car il n'y a aucune comparaison à effectuer
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);  // Renvoie la différence entre les caractères à l'indice i
}
