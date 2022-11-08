#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //pega a entrada
    string input = get_string("Text: ");
    int n = strlen(input);

    //conta numeros, letras e palavras
    int lettercount = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(input[i]))
        {
            lettercount++;
        }

    }
    //conta palavras antes do espaço
    int wordcount = 1;
    for (int i = 0; i < n; i++)
    {
        if (isspace(input[i]) && isgraph(input[i + 1]))
        {
            wordcount++;
        }
    }
    //conta sentenças contando a partir de !
    int sentcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(input[i]) && input[i + 1] == '.')
        {
            sentcount++;
        }
        else if (isalpha(input[i]) && input[i + 1] == '!')
        {
            sentcount++;
        }
        else if (isalpha(input[i]) && input[i + 1] == '?')
        {
            sentcount++;
        }
    }
    //calculo
    float l = (float) lettercount / wordcount * 100;
    float s = (float) sentcount / wordcount * 100;
    float grade = 0.0588 * l - 0.296 * s - 15.8;
    printf("%i %i %i\n", lettercount, wordcount, sentcount);

    //arredondamento e impressãp
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 1 && grade < 16)
    {
        printf("Grade %i\n", (int)round(grade));
    }
    else
    {
        printf("Grade 16+\n");
    }
}