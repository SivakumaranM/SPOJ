#include<stdio.h>
#include<math.h>
int main()
{
	int t, i, count;
	long long res1, res2, n, m, k;
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		res2=0;
		scanf("%lld%lld%lld", &n, &m, &k);
		res1=(n-1)+n*(m-1)+n*m*(k-1);
		count=0;
		while(n>1)
		{
			count++;
			n=ceil((double)n/2);
		}	
		res2+=count;
		count=0;
		while(m>1)
		{
			count++;
			m=ceil((double)m/2);
		}
		res2+=count;
		count=0;
		while(k>1)
		{
			count++;
			k=ceil((double)k/2);
		}
		res2+=count;
		printf("Case #%d: %lld %lld\n", i, res1, res2);
	}
	return 0;
}
