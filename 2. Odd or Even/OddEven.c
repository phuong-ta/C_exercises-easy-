#include <stdio.h>

// funtion return true if num is perfectly divisible by 2
int checkNumber(int number){
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // call funtion and add number as prameter
    checkNumber(num);
    
    return 0;
}