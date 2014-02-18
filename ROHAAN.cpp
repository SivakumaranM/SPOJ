#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int t, n, r, i, j, k, x, res, s, d;
	scanf("%d", &t);
	for(x=1; x<=t; x++)
	{
		res=0;
		scanf("%d", &n);
		int a[n][n];
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				scanf("%d", &a[i][j]);
		scanf("%d", &r);
		
		//Floyd Warshall algorithm
		for(k=0; k<n; k++)
			for(i=0; i<n; i++)
				for(j=0; j<n; j++)
					if((a[i][k]+a[k][j]) < a[i][j])
						a[i][j]=a[i][k]+a[k][j];
		for(i=0; i<r; i++)
		{
			scanf("%d%d", &s, &d);
			res+=a[s-1][d-1];
		}
		printf("Case #%d: %d\n",x,res);
	}
	return 0;	
}
