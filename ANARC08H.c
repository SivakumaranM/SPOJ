#include<stdio.h>
int main()
{
	int n, d, r, i;
	while((scanf("%d", &n) && scanf("%d", &d)) && (n!=0 && d!=0))
	{
		i=2;
		r=0;
		while(i<=n)
		{
			r=(r+d)%i;
			i+=1;
		}
		printf("%d %d %d\n", n, d, r+1);
	}
	return 0;
}
