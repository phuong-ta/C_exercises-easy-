#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any a character from a - z: \n");
    scanf("%c", &ch); 
    for(ch; ch<='z'; ch++){
        //Printing all alphabets with tab
        printf("%c\t", ch);
    }

    return 0;
}