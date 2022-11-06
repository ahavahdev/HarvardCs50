#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Saudar usuário
    string answer = get_string("What´s your name? ");
    printf("hello, %s\n", answer);
}