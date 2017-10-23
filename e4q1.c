#include<stdio.h>
void main()
{
	float bp,sal;
	printf("Basic Pay: ");
	scanf("%f",&bp);
	sal = bp + (bp * 15 / 100) + (bp * 20 / 100);
	printf("Salary: %.2f \n",sal);
}
