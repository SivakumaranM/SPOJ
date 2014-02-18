#include<stdio.h>

int main()
{
	int n, sum, i, x, count;
	while(1)
	{
		scanf("%d", &n);
		if(n==-1)
			break;
		int *a=new int[n];
		sum=0;
		count=0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
			sum=sum+a[i];
		}
		if((sum%n)==0)
		{
			x=sum/n;
			for(i=0; i<n; i++)
			{
				if(a[i]<x)
					count=count+(x-a[i]);
			}
			printf("%d\n", count);	
		}
		else
			printf("-1\n");
	}
	return 0;
}


