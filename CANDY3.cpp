#include<stdio.h>

int main()
{
	int t;
	long long n, x, sum, i;
	scanf("%d", &t);
	while(t--)
	{
		sum=0;
		scanf("%lld", &n);
		for(i=0; i<n; i++)
		{
			scanf("%lld", &x);
			sum=(sum+x)%n;
		}
		if((sum%n)==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
