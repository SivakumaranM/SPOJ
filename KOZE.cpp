
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

vector<string> v;
int vis[251][251]={0};
int dx[]={0, -1, 0, 1}, dy[]={-1, 0, 1, 0};
int flag=0, n, m, shcount=0, wcount=0;

void dfs(int x, int y)
{
	if(v[x][y]=='k')
		shcount++;
	else if(v[x][y]=='v')
		wcount++;
	else if(v[x][y]=='.')
	{
		if(x==0 || x==(n-1) || y==0 || y==(m-1))
			flag=1;
	}
	for(int k=0; k<4; k++)
	{
		if(x+dx[k]>=0 && x+dx[k]<n && y+dy[k]>=0 && y+dy[k]<m && vis[x+dx[k]][y+dy[k]]==0)
		{
			if(v[x+dx[k]][y+dy[k]]=='#')
				continue;
			else
			{
				vis[x+dx[k]][y+dy[k]]=1;
				dfs(x+dx[k],y+dy[k]);
			}
		}
	}
	return;
}

int main()
{
	int i, j, ressheep=0, reswolf=0;
	string str;
	scanf("%d%d", &n, &m);
	for(i=0; i<n; i++)
	{
		cin>>str;
		v.push_back(str);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(vis[i][j]==0)
			{
				flag=0;
				shcount=wcount=0;
				if(v[i][j]=='#')
					continue;
				vis[i][j]=1;
				dfs(i, j);
				if(flag==0)
				{
					if(shcount > wcount)
						ressheep+=shcount;
					else
						reswolf+=wcount;
				}
				else
				{
					ressheep+=shcount;
					reswolf+=wcount;
				}
			}
			
		}
	}
	printf("%d %d", ressheep, reswolf);
	return 0;
}
