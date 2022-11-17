#include<stdio.h>
#include<cs50.h>
#include<string.h>


typedef struct
{
    string name;
    string numbers;
}
person;


int main(void)
{
    person people[2];
    
    people[0].name = "Carter";
    people[0].numbers = "+1-617-495-1000";
    
    people[1].name = "David";
    people[0].numbers = "+1-617-321-5000";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp (people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}