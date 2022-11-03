#include <stdio.h>


void meow(int n);

int main(void)

{
    meow(10); // imprime o numero de meow dentro do parentese
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}
