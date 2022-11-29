#include <stdio.h>
#include<cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // malloc
int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1); //pedaços grandes de memória
    
    strcpy(t, s); //copia em diferentes lugares da memória
    
    
    t[0] = toupper(t[0]); // apenas t mausculo
    
    //free (t); mantem o t original
    
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    
    
}