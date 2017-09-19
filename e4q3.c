#include<stdio.h>
void main()
{
	float c1,c2,c3,c4,g1,g2,g3,g4;
	printf("Enter grades and credits of 4 subjects as c g...: \n");
	scanf("%f%f%f%f%f%f%f%f",&c1,&g1,&c2,&g2,&c3,&g3,&c4,&g4);
	float spi = ((c1*g1)+(c2*g2)+(c3*g3)+(c4*g4))/(c1+c2+c3+c4);
	printf("SPI: %.3f \n",spi);
}
