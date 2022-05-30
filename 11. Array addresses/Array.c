#include <stdio.h>
 
int main()
{
    int arr[10];        //declare integer array
    int *ptr;            //declare an integer pointer
    int  i;
 
    ptr=&arr[0];         //assign base address of array
 
    printf("Enter array elements:\n");
    for(i=0;i < 5; i++){
        scanf("%d",ptr+i);   //reading through pointer
    }
 
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0;i<5;i++){
        printf("%08X\t%03d\n",(ptr+i),*(ptr+i));
    }
 
 
    return 0;
}