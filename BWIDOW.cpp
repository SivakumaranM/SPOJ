#include<stdio.h>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main()
{
	int t, n, a, b, temp, flag, ind, i;
	vector<pair<int,int> > vp;
	scanf("%d", &t);
	while(t--)
	{
		temp=0;
		scanf("%d", &n);
		for(i=0 ;i<n; i++)
		{
			scanf("%d%d", &a, &b);
			vp.push_back(make_pair(a, b));
			if(temp<a)
			{
				temp=a;
				ind=i;
			}
		}
		flag=0;
		for(i=0; i<vp.size()-1; i++)
		{
			if(i==ind)
				continue;
			if(vp[i].second>=temp)
				flag=1;
		}
		if(flag==1)
			printf("-1\n");
		else
			printf("%d\n", ind+1);
		vp.clear();
	}
	return 0;
}
