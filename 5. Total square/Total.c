#include <stdio.h>
/*
  User will give 2 numbers, this excercise aims to count the total square of each number between 2 given number
*/

// funtion's task is count total square of each number between 2 given number
int sum(int number1, int number2){

    int sum=0;
    for (int i = number1; i <= number2; i++){
        sum+=i*i;
    }
    printf("%d\n",sum);
    
}
int main() {
    int num1;
    int num2;
    printf("Enter an first number: ");
    scanf("%d", &num1);
    printf("Enter an second number: ");
    scanf("%d", &num2);
    // call funtion and add number as prameters
    sum(num1, num2);
    
    return 0;
}