#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n, k, i, *a, m, j, pos=-1;
	scanf("%d", &n);
	a=new int[n];
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &k);
	for(i=0; (i+k)<=n; i++)
	{
		m=0;
		if(pos==i-1)
		{
			for(j=i; j<(i+k); j++)
			{
				if(a[j]>m)
				{
					m=a[j];
					pos=j;
				}
			}
			printf("%d ", a[pos]);
			continue;
		}
		else
		{
			for(j=pos+1; j<(i+k); j++)
			{
				if(a[j]>a[pos])
				{
					m=a[j];
					pos=j;
				}
			}
			printf("%d ", a[pos]);
			continue;
		}
	}
	return 0;
}


