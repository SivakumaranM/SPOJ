#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

bool myfunction(int i,int j){return (i<j);}

int main()
{
	int n, e, m, t, i, j, k, t1, t2, cost, count;
	vector<int> b;
	scanf("%d%d%d%d", &n, &e, &t, &m);
	e=e-1;
	int a[n][n];
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			a[i][j]=-1;
	for(i=0; i<m; i++)
	{
		scanf("%d%d%d", &t1, &t2, &cost);
		if((a[t1-1][t2-1]==-1) || (a[t1-1][t2-1]>cost))
			a[t1-1][t2-1]=cost;
	}
	for(k=0; k<n; k++)
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				if(i==j)
					continue;
				if(a[i][j]!=-1)
				{
					if(a[i][k]!=-1 && a[k][j]!=-1 && a[i][k]+a[k][j]<a[i][j])
						a[i][j]=a[i][k]+a[k][j];
				}
				else
				{
					if(a[i][k]!=-1 && a[k][j]!=-1)
						a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
	}
	count=0;
	for(i=0; i<n; i++)
	{
		if(a[i][e]<=t && a[i][e]>=0)
			count++;
	}
	printf("%d\n", count+1);
	return 0;
}

