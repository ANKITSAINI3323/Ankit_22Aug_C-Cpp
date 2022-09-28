#include<stdio.h>
void main()
{
	float p,r,t,si;
	
	printf("Enter the principal amount=");
	scanf("%f",&p);
	
	printf("\nEnter the rate of interst=");
	scanf("%f",&r);
	
	printf("\nEnter the time duration=");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	
	printf(" simple the interest is %f",si);
	 
	 
	
}