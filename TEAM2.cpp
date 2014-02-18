#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int a, b, c, d, i=1;
	while(scanf("%d%d%d%d", &a, &b, &c, &d)!=EOF)
	{
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		sort(v.begin(), v.end());
		printf("Case %d: %d\n", i++, v[2]+v[3]);
		v.clear();
	}
	return 0;
}
