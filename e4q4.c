#include<stdio.h>
void main()
{
	float c,l,f;
	printf("Enter Wavelength: ");
	scanf("%f",&l);
	printf("Enter Speed: ");
	scanf("%f",&c);
	f = c / l;
	printf("Frequency: %.3f \n",f);
}
