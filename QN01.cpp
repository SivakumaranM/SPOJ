#include<stdio.h>
#include<iostream>
using namespace std;

int a[1001];
int m=0;

int main()
{
	int n, l, r, i, j, temp;
	scanf("%d", &n);
	l=r=n+1;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
	{
		temp=a[i];
		if(temp>m)
		{
			m=temp;
			l=i+1;
			r=i+1;
		}
		for(j=i+1; j<n; j++)
		{
			if((temp^a[j])>0)
			{
				temp=temp^a[j];
				if(temp>m)
				{
					m=temp;
					l=i+1;
					r=j+1;
				}
			}
			else
				break;
		}
	}
	printf("%d\n%d %d\n", m, l, r);
	return 0;
}
