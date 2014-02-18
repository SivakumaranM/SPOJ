#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	float l, r, pi=3.1415926;
	while(scanf("%f", &l) && l!=0)
	{
		r=l/pi;
		printf("%.2f\n", (pi*r*r)/2);	
	}
	return 0;
}
