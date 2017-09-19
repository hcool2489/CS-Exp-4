#include<stdio.h>
void main()
{
	float bp,sal;
	printf("Enter Basic Pay: ");
	scanf("%f",&bp);
	sal = bp + (bp * 15 / 100) + (bp * 20 / 100);
	printf("Total Salary: %.2f \n",sal);
}
