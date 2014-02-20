#include<stdio.h>
int main()
{
	int count;
	float t, sum, i;
	while(1)
	{
		count=0;
		sum=0;
		i=2;
		scanf("%f", &t);
		if(t==0)
			break;
		while(sum<=t)
		{
			sum+=1/i;
			i++;
			count++;
		}
		printf("%d card(s)\n", count);
	}
	return 0;	
}

