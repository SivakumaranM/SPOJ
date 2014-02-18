#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunction (int i,int j) { return (i>j); }

int main()
{
	int n, k, s, i, x, sum=0, count=0;
	vector<int> a;
	scanf("%d%d%d", &n, &k, &s);
	for(i=0; i<n; i++)
	{
		scanf("%d",&x);
		a.push_back(x);
	}
	sort(a.begin(), a.end(), myfunction);
	i=0;
	while(sum<(k*s))
	{
		sum+=a[i++];
		count++;
	}
	printf("%d", count);
	return 0;
}
