#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;

map<int,long long> m;
map<int,long long>::iterator it;

long long coins(long long x)
{
	if(x<1000000000)
	{
		it=m.find(x);
		if(it!=m.end())
			return m[it->first];	
	}
	unsigned long int p, q, r;
	p=x/2;
	if(p>=12)
		p=coins(p);
	q=x/3;
	if(q>=12)
		q=coins(q);
	r=x/4;
	if(r>=12)
		r=coins(r);
	if((p+q+r) > x)
	{
		it=m.find(x);
		if(it!=m.end())
			it->second=p+q+r;
		else
			m[x]=p+q+r;
		return p+q+r;
	}
	else
	{
		it=m.find(x);
		if(it==m.end())
			m[x]=x;
		return x;
	}
}

int main()
{
	long long n, res;
	while(scanf("%lld", &n)!=EOF)
	{
		res=coins(n);
		printf("%lld\n", res);
	}
	return 0;
}
