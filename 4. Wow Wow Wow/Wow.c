#include <stdio.h>
#include <string.h>
/*
    Program ask user to give a number between 0 to 50. 
    If given number is bigger than 50 or smaller than 0, the program will ask again. 
    Then program will print WoW, where the amount of "o" will be decided the user's given number.
*/

// funtion create 
int addO(int number){
	  char listO [50]= "";
    for (size_t i = 0; i < number; i++){
      // add o to listO till loop done
      strcat(listO, "o");
    }
	  printf("W%sW\n",listO);
}

int main() {
    int num;
    printf("Enter a number between 0-50: ");
    scanf("%d", &num);
    // check given number
    while (num>50 || num<0){
      printf("Enter a number between 0-50: ");
      scanf("%d", &num);
    }
    // call funtion and add number as prameter
    addO(num);
    
    return 0;
}