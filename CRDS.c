#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long x, n;
	scanf("%d", &t);
	while(t-->0)
	{
		scanf("%lld", &n);
		x=(3*n*n-n)/2;
		x=x+n;
		x=x%1000007;
		printf("%lld\n", x);
	}
	return 0;
}
