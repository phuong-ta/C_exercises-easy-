#include <stdio.h>
 
struct student{
    char name[30];
    int rollNo;
 
    struct dateOfBirth{
        int dd;
        int mm;
        int yy;
    }DOB;
};
 
int main()
{
    struct student std;
    // get name
    printf("Enter name: "); 
    scanf("%[^\n]s",std.name);
    // get roll number
    printf("Enter roll number: ");    
    scanf("%d",&std.rollNo);
    // get date of birth
    printf("Enter Date of Birth [DD MM YYYY] format: ");
    scanf("%d%d%d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);

    printf("\nName : %s \nRollNo : %d \nDate of birth : %02d - %02d - %02d\n",std.name,std.rollNo,std.DOB.dd,std.DOB.mm,std.DOB.yy);
 
    return 0;
}
 