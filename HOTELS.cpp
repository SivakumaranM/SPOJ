#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  long n;
	int i,k=0;
	long long m,max=0,y=0;
	long *a;
	scanf("%ld%lld",&n,&m);
	a=new long[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		if(a[i]==m)
			max=m;
	}
	if(max==0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>m)
			{
				y=0;
				continue;
			}
			if(((y+a[i])<=m&&(y+a[i])>max))	
			{
				y+=a[i];
				max=y;
			}
			else if(((y+a[i])<=m&&(y+a[i])<max))
			{
				y+=a[i];
			}
			else if((y+a[i])>m)
			{
				y=y-a[k++];
				--i;
			}
			if(max==m)
				break;
		}
	}	
	printf("%lld\n",max);
	return 0;
}
