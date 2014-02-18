#include<stdio.h>
#include<iostream>
using namespace std;

int a[1000], b[1000], c[1000];

int main()
{
	int t, n, i, j, max;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%d", &a[0]);
		b[0]=1;
		for(i=1; i<n; i++)
		{
			scanf("%d", &a[i]);
			max=0;
			for(j=0; j<i; j++)
			{
				if(a[j]<a[i])
					if(b[j]>max)
						max=b[j];
			}
			b[i]=max+1;
		}
		c[n-1]=1;
		for(i=n-2; i>=0; i--)
		{
			max=0;
			for(j=n-1; j>i; j--)
			{
				if(a[j]<a[i])
					if(c[j]>max)
						max=c[j];
			}
			c[i]=max+1;
		}
		max=0;
		for(i=0; i<n; i++)
		{
			if((b[i]+c[i])>max)
				max=b[i]+c[i];
		}
		printf("%d\n", max-1);
	}
	return 0;
}

