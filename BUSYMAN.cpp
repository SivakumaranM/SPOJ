#include<iostream>
#include<stdio.h>
using namespace std;
void quicksort(long long [],long long [],long long,long long);
int main()
{
  int t,n,i,temp,count=0;
	long long *a,*b;
	scanf("%d",&t);
	while(t-->0)
	{
		scanf("%d",&n);
		if(n>0)
		{
			a=new long long[n];
			b=new long long[n];
			for(i=0;i<n;i++)
			{
				scanf("%lld%lld",&a[i],&b[i]);
			}
			quicksort(b,a,0,n-1);
			temp=b[0];
			count=1;
			for(i=1;i<n;i++)
			{
				if(a[i]>=temp)
				{
					count++;
					temp=b[i];
				}
			}
		}
		printf("%d\n",count);	
	}
	return 0;
}
void quicksort(long long x[],long long y[],long long first,long long last)
{
    long long pivot,j,temp,i;
     if(first<last)
	{
        	 pivot=first;
         	 i=first;
        	 j=last;
	         while(i<j)
			 {
             	while(x[i]<=x[pivot]&&i<last)
               		i++;
           		while(x[j]>x[pivot])
        		         j--;
            			 if(i<j)
				{
                		 temp=x[i];
             	   		  x[i]=x[j];
               	  		 x[j]=temp;
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
           			  }
		         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
	temp=y[pivot];
         y[pivot]=y[j];
         y[j]=temp;
         quicksort(x,y,first,j-1);
         quicksort(x,y,j+1,last);
    }
}
