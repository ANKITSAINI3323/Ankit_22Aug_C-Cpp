#include<stdio.h>
void main ()
{
	int a,b, choice;
	printf(" \n******choice calcuator");
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	
	printf("\nA =%d ; \n b= %d",a,b);
	
	printf ("\n\nPress 1 for Addition");
	printf ("\nPress 2 for Subtraction");
	printf ("\nPress 3 for Multiplacation");
	printf ("\n\nPress 4 for Division");
	scanf ("%d",&choice);
	
	if (choice==1)
	{  
     	printf ("\nAddition is : %d ", (a+b));
	
	}
	 else  if (choice==2)
	 {
	 	printf("\nsubtraction is: %d",(a-b));
	 }
	 else if (choice==3)
	{
		printf("\nmultiplaction is %d",(a*b));
	}
	else if (choice==4)
	{
		printf("\ndivision is %.2f",(float)(a/b));
	}
    else 
	{
		printf("\ninvalid choice");
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
