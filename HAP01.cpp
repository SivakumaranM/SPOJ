#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	long long m, n, k, c1, c2, count=0, i, j, temp;
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		scanf("%lld%lld%lld", &m, &n, &k);
		for(i=m; i<=n; i++)
		{
			c1=0;
			c2=0;
			j=0;
			temp=i;
			while(temp!=0)
			{
				if(temp%2==1)
				{
					if(j%2==1)
						c1++;
					else
						c2++;
				}
				temp=temp>>1;
				j++;
			}
			if((c1-c2==k)||(c2-c1==k))
				count++;
		}
		printf("%lld\n", count);
	}
}
