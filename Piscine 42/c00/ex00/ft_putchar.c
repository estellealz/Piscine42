#include <unistd.h>

// Fonction pour écrire un caractère sur la sortie standard
void ft_putchar(char c) {
    write(1, &c, 1);
}
