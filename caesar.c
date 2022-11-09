#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check se os argumentos são dois
    if (argc != 2)
    {
        printf("can not be ciphered\n");
        return 1;
    }
    // declarando valor de se ele interage com o segundo argumento da string
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("please enter a valid number\n");
        return 1;

    }

    //prompt usuario proximo texto
    string text = get_string("please Enter your text: ");

    printf("ciphertext:");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //check caracter e letra
        if (isalpha(text[i]))
        {
            //check se a letra é maiuscula
            if (isupper(text[i]))
            {
                //converte a letra em número
                char cipher_num_capital = ((text[i] - 65 + k) % 26) + 65;
                
                //imprimir a letra do número como um caractere
                printf("%c", cipher_num_capital);

            }

            //check se as letras são minúsculas
            if (islower(text[i]))
            {
                //convertendo a letra em número e cifra 
                char cipher_num_small = ((text[i] - 97 + k) % 26) + 97;
                
                //imprima a letra do número como caractere
                printf("%c", cipher_num_small);
            }


        }
        else
        {
            //caso o caractere em não seja uma letra, imprima-o como está
            printf("%c", text[i]);
        }
    }

    printf("\n");
}