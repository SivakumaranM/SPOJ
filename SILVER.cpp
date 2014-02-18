#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t, i;
	while(scanf("%d", &t) && t!=0)
	{
		i=0;
		while(pow(2, i)<=t)
		{
			i++;
		}
		printf("%d\n", i-1);
	}
	return 0;
}
