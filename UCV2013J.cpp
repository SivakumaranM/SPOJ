#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;

//Fast input
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
	int n, i, *a, ans;
	scanint(n);
	while(n!=0)
	{
		a=new int[n];
		ans=0;
		for(i=0; i<n; i++)
			scanint(a[i]);
		for(i=floor(n/2); i<n; i++)
			ans+=a[i];
		printf("%d\n", ans);
		scanint(n);
	}
	return 0;
}
