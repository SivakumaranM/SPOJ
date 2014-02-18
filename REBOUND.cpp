#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	double x, y, z;
	double res, t1, t2, t3, t4;
	scanf("%d", &t);
	while(t--)
	{	
		scanf("%lf%lf%lf", &x, &y, &z);
		t1=x*x;
		t2=(y+2*z)*y;
		t3=sqrt(t1+t2);
		t4=z*(x+t3);
		res=t4/(t2/y);
		if((res-(long long)res)>0)
			printf("Not this time.\n");
		else
			printf("%lld\n",(long long)res);
	}
	return 0;
}

