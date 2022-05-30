
#include <stdio.h>
#include <string.h>
/*
    Using strcat to conncect to string
*/
int main(){

    char firstName[30], lastName[30];
    int length;
    printf("Enter your first name: ");

    scanf("%s", firstName);  // read string
    strcat(firstName," "); // add white space after first name

    printf("Enter your last name: ");

    scanf("%s", lastName);  // read string
    strcat(firstName,lastName); // add last name after firstname + whiteSpace

    length = length = strlen(firstName)-1; // strlen to find string lenth
    printf("Your full name is: %s\n",firstName);
    printf("Length of your full name is: %d\n",length);
    return 0;
}