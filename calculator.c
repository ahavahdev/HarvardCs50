#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_int("x: ");

    float y = get_int("y: ");

    float z = (float) x / (float) y;
    //.2 duas casas decimais, f de float
    printf("%.50f\n", z);


}

