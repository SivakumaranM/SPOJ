#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		char a[200];
		char **b,ch;		
		int n, m, i, j, k, z=0;
		scanf("%d", &n);
		if(n==0)
			break;
		scanf("%s", &a);
		while((ch=getchar())!='\n')
		{}
		m=strlen(a)/n;
		b=new char *[m];
		for(i=0; i<m; i++)
			b[i]=new char[n];
		for(k=0; k<m; k++)
		{
			if(k%2==0)
			{
				for(j=0; j<n; j++)
				{
					b[k][j]=a[z++];
					if(z==strlen(a))
						break;
				}
			}
			else
			{
				for(j=n-1; j>=0; j--)
				{
					b[k][j]=a[z++];
					if(z==strlen(a))
						break;
				}
			}
		}
		for(j=0; j<n; j++)
		{
			for(i=0; i<m; i++)
			{
				if(b[i][j]>='a'&&b[i][j]<='z')
					printf("%c",b[i][j]);
			}
		}
		printf("\n");
		fflush(stdout);
		fflush(stdin);
	}
	return 0;
}
