#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2;
	float slope,angle;
	printf("Enter first cordinates (x1 y1): ");
	scanf("%f%f",&x1,&y1);
	printf("Enter second cordinates (x2 y2): ");
	scanf("%f%f",&x2,&y2);
	slope = (y2-y1)/(x2-x1);
	angle = atan(slope);	
	printf("Slope = %.2f \nAngle = %.2f \n",slope,angle);
}
