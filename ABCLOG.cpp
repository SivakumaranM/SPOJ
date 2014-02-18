#include<stdio.h>
#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int main()
{
	int j;
	long long n, m, t1;
	stack<int> s;
	while(scanf("%lld", &n) && n!=-1)
	{
		while(n)
		{
			t1=n%2;
			s.push(t1);
			n/=2;
		}
		m=s.top();
		s.pop();
		j=1;
		while(!s.empty())
		{
			t1=s.top();
			s.pop();
			if(t1==1)
				m+=pow(2, j);
			j++;
		}
		printf("%lld\n", m);
	}
	return 0;
}
