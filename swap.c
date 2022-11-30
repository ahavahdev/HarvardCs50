#include <stdio.h>
#include <stdlib.h> 
#include <cs50.h>

void swap(int *a, int *b);

int main(void)
{
   int x = 1;
   int y = 2;
   
   printf("x is %i, y é %i\n", x, y);
   swap(&x, &y); // & passando a copia
   printf("x is %i, y é %i\n", x, y);
}


void swap(int *a, int *b)
{
   
   int tmp = *a;
   *a = *b;
   *b = tmp;
   
}   
   
