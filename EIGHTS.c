#include<stdio.h>
int main()
{
	int t;
	unsigned long long k, x;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%llu", &k);
		x=(k-1)*250+192;
		printf("%llu\n", x);
	}
	return 0;
}
