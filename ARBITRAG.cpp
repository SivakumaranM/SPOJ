#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main()
{
	int n, m, i, j, k, q=0, flag;
	string temp, t1, t2; 
	double x;
	scanf("%d", &n);
	while(n!=0)
	{
		q++;
		flag=0;
		map<string, int> p1;
		double a[n][n];
		for(i=0; i<n; i++)
		{
			cin>>temp;
			p1[temp]=i;
		}
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				a[i][j]=0;
		scanf("%d", &m);
		for(i=0; i<m; i++)
		{
			cin>>t1>>x>>t2;
			a[p1.find(t1)->second][p1.find(t2)->second]=x;
		}
		for(k=0; k<n; k++)
			for(i=0; i<n; i++)
				for(j=0; j<n; j++)
					a[i][j]=max(a[i][j], a[i][k]*a[k][j]);
		for(i=0; i<n; i++)
		{
			if(a[i][i]>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("Case %d: Yes\n", q);
		else
			printf("Case %d: No\n", q);
		p1.clear();
		scanf("%d", &n);
	}
	return 0;
}
