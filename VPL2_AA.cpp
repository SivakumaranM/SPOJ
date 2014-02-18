#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int n, i;
	float p, q, t, s, x;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%f%f%f%f",&p, &q, &t, &s);
		x=logf(p/q)/t;
		s=logf(p/s)/x;
		printf("Scenario #%d: %.2f\n", i, s);
	}
	return 0;
}
