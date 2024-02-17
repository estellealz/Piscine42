#include <unistd.h>

// Fonction pour calculer le quotient et le reste de la division de a par b
void ft_div_mod(int a, int b, int *div, int *mod)
{
    // Si b est différent de zéro, on effectue la division
    if (b != 0)
    {
        *div = a / b; // Calcul du quotient
        *mod = a % b; // Calcul du reste
    }
    // Si b est égal à zéro, on ne modifie pas div et mod (indéfini dans ce cas)
}
