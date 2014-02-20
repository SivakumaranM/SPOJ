#include<stdio.h>
int main()
{
	int i, res, n;
	scanf("%d", &n);
	res=n;
	for(i=1; i<10; i++)
	{
		scanf("%d", &n);
		if((res+n)<=100)
			res+=n;
		else
		{
			if(res==100)
				break;
			if((res+n-100)<=(100-res))
				res+=n;
			break;
		}
	}
	printf("%d\n", res);
	return 0;
}
