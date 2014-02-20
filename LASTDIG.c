#include<stdio.h>
int main()
{
	int t, a, res, i;
	long b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%ld", &a, &b);
		if(b==0)
			printf("1\n");
		else
		{
			b=b%4;
			if(b==0)
				b=4;
			res=1;
			for(i=0; i<b; i++)
				res*=a;
			printf("%d\n", res%10);
		}
	}
	return 0;
}
