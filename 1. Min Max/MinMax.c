#include <stdio.h>
/*
  User will give 2 numbers, this excercise aims to check which number is bigger, which number is smaller.
*/

// funtion check 2 inputed numbers, which one is bigger
int checkNumber(int number1, int number2){
    if(number1 >number2)
        printf("%d is bigger than %d.\n", number1, number2);
    else
        printf("%d is bigger than %d.\n", number2, number1);
}
int main() {
    int num1;
    int num2;
    printf("Enter an first number: ");
    scanf("%d", &num1);
    printf("Enter an second number: ");
    scanf("%d", &num2);
    // call funtion and add number as prameter
    checkNumber(num1, num2);
    
    return 0;
}