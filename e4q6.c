#include<stdio.h>
void main()
{
	float a=4,t=3,u=0,v,s;
	v = u + (a * t);
	s = (u * t) + ((a * t * t) / 2);
	printf("Final Velocity: %.2f \n Distance Travelled: %.2f \n",v,s);
}
