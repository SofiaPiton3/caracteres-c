#include <stdio.h>

int main() 
{
    char caracteres[256];
    int i;

    for (int i = 0; i < 256; i++) 
    {
        caracteres[i] = (char)i;
    }

    for (int i = 0; i < 256; i++) 
    {
        printf("%c\n", caracteres[i]);
    }

       printf("Criado por Sofia Araújon Piton");
}