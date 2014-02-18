#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n, q, x, y, i, j, k;
	long long sum=0, t1, z;
	char ch;
	scanf("%d", &n);
	long long c[n][n], a[n][n], b[n][n];
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%lld", &a[i][j]);
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%lld", &b[i][j]);
	for(i=0; i<n; i++)
	{
    	for(j=0; j<n; j++)
		{ 
          	c[i][j]=0;
           	for(k=0; k<n; k++)
        		c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        	sum+=c[i][j];
        }
    }
	scanf("%d\n", &q);
	while(q--)
	{
		cin>>ch>>x>>y>>z;
		if(ch=='A')
		{
			t1=a[x][y]-z;
			a[x][y]=z;
			for(i=0; i<n; i++)
				sum-=(t1*b[y][i]);
			printf("%lld\n",sum);
		}
		else
		{
			t1=b[x][y]-z;
			b[x][y]=z;
			for(i=0; i<n; i++)
				sum-=(a[i][x]*t1);
			printf("%lld\n",sum);
		}
	}
	return 0;
}
