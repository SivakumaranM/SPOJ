#include<stdio.h>

int main()
{
	int t, count, n, m, d, h;
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		scanf("%d%d%d", &n, &m, &d);
		while(n--)
		{
			scanf("%d", &h);
			count=count+(h-1)/d;
		}
		if(count>=m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
