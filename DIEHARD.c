#include<stdio.h>

int main()
{
	int t, h, a, m;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &h, &a);
		h+=3;
		a+=2;
		m=1;
		while(1)
		{
			if((h-5)>0 && (a-10)>0)
			{
				h-=5;
				a-=10;
			}
			else if((h-20)>0)
			{
				h-=20;
				a+=5;
			}
			else
				break;
			m+=2;
			h+=3;
			a+=2;
		}
		printf("%d\n",m);
	}
	return 0;
}
