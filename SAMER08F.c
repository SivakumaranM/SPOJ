#include<stdio.h>
int main()
{
	int n, res, i;
	while(1)
	{	
		scanf("%d", &n);
		if(n==0)
			break;
		res=0;
		for(i=1; i<=n; i++)
			res=res+i*i;	
		printf("%d\n", res);
	}
	return 0;
}
