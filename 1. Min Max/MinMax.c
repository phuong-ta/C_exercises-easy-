#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int checkNumber(int number1, int number2) {
  if (number1>number2)
  {
    char result = printf("big number is %d", number1);
    return result;
  }else{
    char result = printf("big number is %d", number2);
    return result;
  }
  
  
}

int main(void) {
  int firstNumber;
  int secondNumber;
  scanf(" First number is %d", &firstNumber);
  scanf(" First number is %d", &secondNumber);
  int bigNumber = checkNumber(firstNumber, secondNumber);
  printf("big number is %d", bigNumber);
}