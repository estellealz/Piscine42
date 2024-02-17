#include <unistd.h>

// Fonction pour échanger les valeurs des variables pointées par a et b (pointeurs sur int)
void ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
