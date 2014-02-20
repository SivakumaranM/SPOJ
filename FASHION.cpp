#include<stdio.h>
#include<iostream>
using namespace std;

void quicksort(int x[], int first, int last)
{
    int pivot, j, temp, i;
    if(first<last)
	{
		pivot=first;
        i=first;
       	j=last;
		while(i<j)
		{
        	while(x[i]<=x[pivot] && i<last)
            	i++;
           	while(x[j]>x[pivot])
        		j--;
            if(i<j)
			{
                temp=x[i];
             	x[i]=x[j];
         		x[j]=temp;
           	}
		}
        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x, first, j-1);
        quicksort(x, j+1, last);
    }
}

int main()
{
	int t, n, *a, *b, i, res;
	scanf("%d", &t);
	while(t--)
	{	
		res=0;
		scanf("%d", &n);
		a=new int[n];
		b=new int[n];
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(i=0; i<n; i++)
			scanf("%d", &b[i]);
		quicksort(a, 0, n-1);
		quicksort(b, 0, n-1);
		for(i=0; i<n; i++)
			res=res+(a[i]*b[i]);
		printf("%d\n", res);			
	}
	return 0;
}

