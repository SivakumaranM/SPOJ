#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunction(int i,int j)
{
	return(i>j);
}

int main()
{
	int t, y, k=1, i, z, count;
	long x, sum;
	vector<int> a;
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		sum=0;
		scanf("%ld%d", &x, &y);
		for(i=0; i<y; i++)
		{
			scanf("%d", &z);
			a.push_back(z);
		}
		printf("Scenario #%d:\n", k++);
		sort(a.begin(), a.end(), myfunction);
		for(i=0; i<y; i++)
		{
			sum=sum+a[i];
			if(sum<x)
				count++;
			if(sum>=x)
			{
				count++;
				break;
			}
		}
		if(sum<x)
			printf("impossible\n\n");
		else
			printf("%d\n\n", count);
		a.clear();
	}
	return 0;
}
