#include<stdio.h>
#include<iostream>
using namespace std;

int min(int x, int y)
{
	if(x<y)
		return x;
	else
		return y;
}

int min(int x, int y, int z)
{
	if(x<y && x<z)
		return x;
	else if(y<x && y<z)
		return y;
	else
		return z;
}

int min(int **arr, int x, int y)
{
	int q[x][y], i, j, m;
	for(i=0; i<y; i++)
		q[0][i]=arr[0][i];
	for(i=1; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(j==0)
				q[i][j]=arr[i][j]+min(q[i-1][j], q[i-1][j+1]);
			else if(j==(y-1))
				q[i][j]=arr[i][j]+min(q[i-1][j-1], q[i-1][j]);
			else
				q[i][j]=arr[i][j]+min(q[i-1][j-1], q[i-1][j], q[i-1][j+1]);
		}
	}	
	m=q[x-1][0];
	for(i=1; i<y; i++)
	{
		if(q[x-1][i]<m)
			m=q[x-1][i];
	}
	return m;
	
}

int main()
{
	int r, c, **a, i, j, m;
	scanf("%d%d", &r, &c);
	a=new int * [r];
	for(i=0; i<r; i++)
	{
		a[i]=new int[c];
		for(j=0; j<c; j++)
			scanf("%d", &a[i][j]);
	}
	m=min(a, r, c);
	printf("%d\n", m);
	return 0;
}
