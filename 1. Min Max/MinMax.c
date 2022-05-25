#include <stdio.h>

int checkNumber(int number1, int number2) {
  if (number1>number2)
  {
    return number1;
  }else{
    return number2;
  }
}

int main(void) {
  int firstNumber;
  int secondNumber;
  scanf(" First number is %d", &secondNumber);
  scanf(" First number is %d", &firstNumber);
  int bigNumber = checkNumber(firstNumber, secondNumber);
  printf("big number is %d", bigNumber);
}