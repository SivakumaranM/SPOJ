#include<stdio.h>
#include<iostream>
using namespace std;

char a[11][11];
bool v[11][11];
int count;
int dx[]={-2, -2, -1, -1, 1, 1, 2, 2};
int dy[]={-1, 1, -2, 2, -2, 2, -1, 1};
int n;

int countSquares()
{
	int i, j, c=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<10; j++)
		{
			if(v[i][j]==true)
				c++;	
		}
	}
	return c;
}

int knightTour(char a[][11], int stx, int sty)
{
	int flag=0, temp=0, c=0;
	for(int i=0; i<8; i++)
	{
		if(stx+dx[i]>=0 && stx+dx[i]<n && sty+dy[i]>=0 && sty+dy[i]<10 && a[stx+dx[i]][sty+dy[i]]=='.' && v[stx+dx[i]][sty+dy[i]]==false)
		{
			flag=1;
			v[stx+dx[i]][sty+dy[i]]=true;
			temp=knightTour(a, stx+dx[i], sty+dy[i]);
			v[stx+dx[i]][sty+dy[i]]=false;
			if(temp>c)
				c=temp;
		}
	}
	if(flag==0)
		return 1;
	else
		return c+1;
}

int main()
{
	int i, j, k, t1, t2, r, x, y, t3, p=0;
	scanf("%d", &n);
	while(1)
	{
		p++;
		count=0;
		r=0;
		if(n==0)
			break;
		for(i=0; i<11; i++)
		{
			for(j=0; j<11; j++)
			{
				a[i][j]='#';
				v[i][j]=false;
			}
		}
		for(i=0; i<n; i++)
		{
			scanf("%d%d", &t1, &t2);
			count+=t2;
			for(j=t1, k=0; k<t2; j++, k++)
				a[i][j]='.';
		}	
		int f=0;
		for(i=0; i<n; i++)
		{
			for(j=0; j<10; j++)
			{
				if(a[i][j]=='.')
				{
					x=i;
					y=j;
					f=1;
					break;
				}
			}
			if(f==1)
				break;
		}
		v[x][y]=true;
		r=knightTour(a, x, y);
		t3=count-r;
		if(t3==1)
			printf("Case %d, 1 square can not be reached.\n", p);
		else
			printf("Case %d, %d squares can not be reached.\n", p, t3);
		scanf("%d", &n);
	}
	return 0;
}

