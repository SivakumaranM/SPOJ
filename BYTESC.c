#include<stdio.h>

int grt(int x, int y, int z)
{
	if(x>=y)
	 return (x>=z) ? x : z;
	else
	 return (y>=z) ? y : z; 
}
int main()
{
	int t, r, c, i, j, m;
	scanf("%d", &t);
	while(t--)
	{
		m=0;
		scanf("%d%d", &r, &c);
		int a[r][c];
		for(i=0; i<r; i++)
			for(j=0; j<c; j++)
				scanf("%d", &a[i][j]);
		for(i=1; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				if(j==0 && j!=(c-1))
					a[i][j]=a[i][j]+grt(a[i-1][j], a[i-1][j+1], 0);
				else if(j==0 && j==(c-1))
						a[i][j]=a[i][j]+a[i-1][0];
				else if(j==(c-1))
					a[i][j]=a[i][j]+grt(a[i-1][j-1], a[i-1][j], 0);
				else
					a[i][j]=a[i][j]+grt(a[i-1][j-1], a[i-1][j], a[i-1][j+1]);			
			}
		}	
		m=a[r-1][0];
		for(i=1; i<c; i++)
		{
			if(a[r-1][i]>m)
				m=a[r-1][i];
		}
		printf("%d\n", m);
	}
	return 0;
}
