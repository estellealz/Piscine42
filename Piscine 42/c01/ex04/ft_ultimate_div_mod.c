#include <unistd.h>

// Fonction pour calculer le quotient et le reste de la division de *a par *b
void ft_ultimate_div_mod(int *a, int *b)
{
    // Si *b est différent de zéro, on effectue la division
    if (*b != 0)
    {
        int div = *a / *b; // Calcul du quotient
        int mod = *a % *b; // Calcul du reste
        *a = div;          // Mise à jour de la valeur pointée par a avec le quotient
        *b = mod;          // Mise à jour de la valeur pointée par b avec le reste
    }
    // Si *b est égal à zéro, on ne modifie pas *a et *b (indéfini dans ce cas)
}
