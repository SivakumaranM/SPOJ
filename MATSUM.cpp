#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
	int t, n, i, j, t1, t2, t3, t4;
	char str[3];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int a[n][n];
		memset(a, 0, sizeof(int)*n*n);
		scanf("%s", &str);
		while(strcmp("END", str)!=0)
		{
			if(strcmp("SET", str)==0)
			{
				scanf("%d%d%d", &t1, &t2, &t3);
				a[t1][t2]=t3;
			}
			else if(strcmp("SUM", str)==0)
			{
				scanf("%d%d%d%d", &t1, &t2, &t3, &t4);
				printf("Working\n");
			}
			scanf("%s", &str);
		}
	}
	return 0;
}
