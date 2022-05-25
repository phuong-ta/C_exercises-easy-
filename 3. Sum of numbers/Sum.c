#include <stdio.h>
/*
  User will give 2 numbers, this excercise aims to count the total of two given numbers.
*/

// funtion's task is count sumary of 2 numbers.
int sum(int number1, int number2){

    printf("Sum of two given numbers is %d.\n", number1+number2 );
}
int main() {
    int num1;
    int num2;
    printf("Enter an first number: ");
    scanf("%d", &num1);
    printf("Enter an second number: ");
    scanf("%d", &num2);
    // call funtion and add number as prameter
    sum(num1, num2);
    
    return 0;
}