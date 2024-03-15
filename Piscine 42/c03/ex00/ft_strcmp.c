int ft_strcmp(char *s1, char *s2)
{
    int i;  // Déclaration d'un compteur pour parcourir les chaînes
    char diff;  // Variable pour stocker la différence entre les caractères
    unsigned char *s1u;  // Pointeur vers la première chaîne en tant que tableau d'octets non signés
    unsigned char *s2u;  // Pointeur vers la deuxième chaîne en tant que tableau d'octets non signés

    s1u = (unsigned char *) s1;  // Conversion de la première chaîne en tableau d'octets non signés
    s2u = (unsigned char *) s2;  // Conversion de la deuxième chaîne en tableau d'octets non signés
    i = 0;  // Initialisation du compteur
    diff = 0;  // Initialisation de la variable de différence à zéro
    while (s1u[i] && s2u[i])  // Parcourt les deux chaînes jusqu'à ce qu'on atteigne la fin de l'une d'entre elles
    {
        diff = s1u[i] - s2u[i];  // Calcule la différence entre les caractères actuels des deux chaînes
        i++;  // Incrémente le compteur pour passer au caractère suivant
        if (diff != 0)  // Si la différence est non nulle, cela signifie que les chaînes sont différentes à cette position
            return (diff);  // Renvoie la différence entre les caractères
    }
    diff = s1u[i] - s2u[i];  // Si on atteint la fin d'une des chaînes, calcule la différence entre les caractères terminaux
    return (diff);  // Renvoie la différence entre les caractères
}
