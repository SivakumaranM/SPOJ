#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t, n, i, k;
	long long *a;
	scanf("%d", &t);
	for(k=1; k<=t; k++)
	{
		scanf("%d", &n);
		if(n==0)
		{
			printf("Case %d: 0\n", k);
			continue;
		}	
		a=new long long[n];
		for(i=0; i<n; i++)
			scanf("%lld", &a[i]);
		if(n==1)
			printf("Case %d: %lld\n", k, a[0]);
		else if(n==2)
			printf("Case %d: %lld\n", k, max(a[0], a[1]));
		else
		{
			for(i=n-3; i>=0; i--)
			{
				if(i==(n-3))
					a[i]=a[i]+a[n-1];
				else
					a[i]=a[i]+max(a[i+2],a[i+3]);
			}
			printf("Case %d: %lld\n", k, max(a[0], a[1]));
		}
		delete[] a;	
	}
	return 0;
}
