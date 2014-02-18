#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int p[20005];
int d[20005];
int a, b, sum=0;

int findset(int x)
{
	if(x==p[x])
		return x;
	else
		return p[x]=findset(p[x]);
}

int func(int t1)
{
	if(t1==p[t1])
		return t1;
	else
	{
		p[t1]=func(p[t1]);
		sum+=d[t1];
		d[t1]=sum;
		return p[t1];
	}
}

int main()
{
	int t, n, t1, t2, i;
	char ch;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		
		for(i=1; i<=n; i++)
		{
			p[i]=i;
			d[i]=0;
		}
		
		while(1)
		{
			scanf("%*c%c", &ch);
            if(ch=='O')
                break;
			if(ch=='E')
			{
				scanf("%d", &t1);
				sum=0;
				func(t1);
				printf("%d\n", sum);
			}
			else
			{
				scanf("%d %d",&t1, &t2);
				p[t1]=t2;
				d[t1]=abs(t1-t2)%1000;
			}
		}	
	}
	return 0;
}
