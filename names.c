#include<cs50.h>
#include<stdio.h>
#include<string.h>


int main(void)
{
    string names[] = {"Bill", "Charlie", "Bruno", "Fred"};
    
    for (int i = 0; i < 7; i++)
    {
        if (strcmp (names[i], "Bruno") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
    
}