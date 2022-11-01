#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pegue os números do usuário
    int x = get_int("x: ");
    int y = get_int("y: ");
    //Divda x por y
    float z = (float) x / (float) y;
    //imprima o resultado
    printf("%f\n", z);
}