#include <stdio.h>
void main()
{ 
   int roll_no,a1,b2,c3,total;
   char name[10];
   float per;
    
    
    printf("\n *******studant marksheet******");
    printf("\n \nEnter Roll no");
    scanf("%d",&roll_no);
    printf(" Enter name :");
    scanf("%s", name );
    printf(" Enter phy mark:");
    scanf("%d",&a1);
    printf("Enter Chem Marks : ");
   scanf("%d",&b2);
	printf("Enter Maths Marks : ");
	scanf("%d",&c3);
	total = a1+b2+c3;
	per = (float)total / 3;
   
   
   
   
   
   
   
   
   
   
   
}