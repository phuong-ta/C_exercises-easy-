#include <stdio.h>
#include <string.h>
/*
    Using strcat to conncect to string
*/
int main(){

    char firstName[30], lastName[30];
    printf("Enter your first name: ");

    scanf("%s", firstName);  // read string
    strcat(firstName," "); // add white space after first name

    printf("Enter your last name: ");

    scanf("%s", lastName);  // read string
    strcat(firstName,lastName); // add last name after firstname + whiteSpace

    printf("Your full name is: %s\n",firstName);
    return 0;
}