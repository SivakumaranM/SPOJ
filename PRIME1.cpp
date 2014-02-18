#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t, m, n, i, j, k;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &m, &n);
		int *a=new int[n-m+1];
		for(i=0; i<(n-m+1); i++)
			a[i]=0;
		for(k=2; (k*k)<=n; k++)
		{
			int c=m/k;
			c*=k;
			for(j=c; j<=n; j+=k)
			{
				if(j!=k && j>=m)
					a[j-m]=1;
			}
		}
		for(i=0; i<(n-m+1); i++)
			if(a[i]==0 && m+i!=1)
				printf("%d\n", m+i);
		printf("\n");
		delete[] a;
	}
	return 0;
}

