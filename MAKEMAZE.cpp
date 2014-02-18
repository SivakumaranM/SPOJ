#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

char a[20][20];
bool v[20][20];
int dx[]={-1, 0, 1, 0};
int dy[]={0, 1, 0, -1};

bool backtrack(char a[][20], int m, int n, int stx, int sty, int endx, int endy)
{
	if(stx==endx && sty==endy)
		return true;
	for(int i=0; i<4; i++)
	{
		if(stx+dx[i]>=0 && stx+dx[i]<m && sty+dy[i]>=0 && sty+dy[i]<n && v[stx+dx[i]][sty+dy[i]]==false && a[stx+dx[i]][sty+dy[i]]=='.')
		{
			v[stx+dx[i]][sty+dy[i]]=true;
			if(backtrack(a, m, n, stx+dx[i], sty+dy[i], endx, endy))
				return true;
			else
				v[stx+dx[i]][sty+dy[i]]=false;
		}
	}
	return false;
}

int main()
{
	int t, m, n, i, j, c;
	string temp;
	vector<pair<int,int> > vp;
	scanf("%d", &t);
	while(t--)
	{
		c=0;
		scanf("%d%d", &m, &n);
		for(i=0; i<m; i++)
		{
			cin>>temp;
			for(j=0; j<n; j++)
			{
				a[i][j]=temp[j];
				v[i][j]=false;
			}
		}
		if(m==1 && n==1)
		{
			printf("invalid\n");
			continue;
		}
		else if(n==1)
		{
			for(i=0; i<m; i++)
			{
				if(a[i][0]=='.')
				{
					vp.push_back(make_pair(i, 0));
					c++;
				}
			}
		}
		else if(m==1)
		{
			for(i=0; i<n; i++)
			{
				if(a[0][i]=='.')
				{
					vp.push_back(make_pair(0, i));
					c++;
				}
			}
		}
		else
		{
			for(i=0; i<m; i++)
			{
				if(a[i][0]=='.')
				{
					vp.push_back(make_pair(i, 0));
					c++;
				}
				if(a[i][n-1]=='.')
				{
					vp.push_back(make_pair(i, n-1));
					c++;
				}
			}
			for(i=1; i<n-1; i++)
			{
				if(a[0][i]=='.')
				{
					vp.push_back(make_pair(0, i));
					c++;
				}
				if(a[m-1][i]=='.')
				{
					vp.push_back(make_pair(m-1, i));
					c++;
				}
			}
		}
		if(c!=2)
		{
			printf("invalid\n");
			vp.clear();
			continue;
		}
		else
		{
			v[vp[0].first][vp[0].second]=true;
			if(backtrack(a, m, n, vp[0].first, vp[0].second, vp[1].first, vp[1].second))
				printf("valid\n");
			else
				printf("invalid\n");
		}
		vp.clear();
	}
	return 0;
}
