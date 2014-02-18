#include<stdio.h>
#include<math.h>

int main()
{
	int t, i;
	float g=9.806, ang, d, s;
	float pi=2*acos(0.0);
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%f%f", &d, &s);
		ang=0.5*asin((g*d)/(s*s))*180/pi;
		if(ang>=0 && ang<=45)
			printf("Scenario #%d: %.2f\n", i, ang);
		else
			printf("Scenario #%d: -1\n", i);
	}
	return 0;
}
