#include<stdio.h>
int main()
{
	int k, i;
	long x, n;
	x=0;
	scanf("%d", &k);
	for(i=0; i<k; i++)
	{
		scanf("%ld", &n);
		x=x^n;
	}
	printf("%ld\n", x);
	return 0;
}
	
