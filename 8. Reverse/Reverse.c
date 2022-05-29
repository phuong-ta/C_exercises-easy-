#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 //Maximum size of the string

int main()
{
    int i, j, lenght;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];

    printf("Enter a string: ");
    scanf("%s", string); 

    lenght = strlen(string);
    j = 0;

    for(i=lenght-1; i>=0; i--)
    {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';

    printf("Reverse string : %s\n", reverse);

    return 0;
}