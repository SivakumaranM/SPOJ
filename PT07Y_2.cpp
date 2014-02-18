#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int> > vi;
bool vis[10001]={false};

void bfs(int st, int end)
{
	queue<int> q;
	q.push(st);
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		vis[temp]=true;
		for(int i=1; i<vi[temp].size(); i++)
		{
			if(vis[vi[temp][i]]==false)
				q.push(vi[temp][i]);
		}
	}
}

int main()
{
	int n, m, i, j, t1, t2, flag=0;
	scanf("%d%d", &n, &m);
	vector<int> v;
	for(i=0; i<=n; i++)
	{
		v.push_back(i);
		vi.push_back(v);
		v.clear();
	}
	for(i=0; i<m; i++)
	{
		scanf("%d%d", &t1, &t2);
		vi[t1].push_back(t2);
		vi[t2].push_back(t1);
	}
	if(m==(n-1))
	{
		bfs(1,n);
		for(i=1; i<=n; i++)
		{
			if(vis[i]!=true)
			{
				flag=1;
				printf("NO\n");
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
