#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, temp;
	double d;
	while(1)
	{
		scanf("%d%d", &a, &b);
		if(a==0 && b==0)
		{
			printf("0\n");
			continue;
		}	
		else if(a==-1 && b==-1)
			break;	
		else if(b==0 && a>0)
			printf("%d\n", a);
		else if(a==0 && b>0)
			printf("%d\n", b);
		else if(a==b)
			printf("1\n");
		else
		{
			if(a<b)
			{
				temp=a;
				a=b;
				b=temp;
			}	
			d=(float)a/(float)(b+1);
			printf("%d\n", (int)ceil(d));
		}
	}
	return 0;
}
