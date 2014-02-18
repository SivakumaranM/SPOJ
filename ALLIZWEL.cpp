#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

char str[]="ALLIZZWELL";
int count, flag;
char *ptr=str;
int dx[]={-1, -1, -1, 0, 1, 1, 1, 0};
int dy[]={-1, 0, 1, 1, 1, 0, -1, -1};
int func(char **b, int r, int c, int x, int y, int **v)
{
	if(count==9)
	{
		flag=1;
		return 1;
	}
	char *p=ptr;
	int cnt=count;
	for(int i=0; i<8; i++)
	{
		if((x+dx[i])>=0 && (y+dy[i])>=0 && (x+dx[i])<r && (y+dy[i])<c && b[x+dx[i]][y+dy[i]]==*ptr && v[x+dx[i]][y+dy[i]]!=1)
		{
			count++;
			ptr++;
			v[x+dx[i]][y+dy[i]]=1;
			func(b, r, c, x+dx[i], y+dy[i], v);
			if(flag==1)
				return 1;
			else
			{
				count=cnt;
				v[x+dx[i]][y+dy[i]]=0;
				ptr=p;
			}
		}
	}
	return 0;
}

int main()
{
	int t, r, c, i, j, x, y, res, **v;
	char **a, *b;
	vector<pair<int,int> > v1;
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		flag=0;
		ptr=str;
		char *p;
		scanf("%d%d",&r, &c);
		a=new char * [r];
		v=new int * [r];
		b=new char[c];
		for(i=0; i<r; i++)
		{
			a[i]=new char[c];
			v[i]=new int[c];
		}
		for(i=0; i<r; i++)
		{
			cin>>b;
			for(j=0; j<c; j++)
			{
				v[i][j]=0;
				a[i][j]=b[j];
				if(a[i][j]=='A')
				{
					v[i][j]=1;
					v1.push_back(make_pair(i, j));
				}
			}
		}
		if(v1.empty())
			printf("NO\n");
		else
		{
			ptr++;
			p=ptr;
			for(i=0; i<v1.size(); i++)
			{
				x=v1[i].first;
				y=v1[i].second;
				func(a, r, c, x, y, v);
				if(flag==1)
				{
					printf("YES\n");
					break;
				}
				ptr=p;
				count=0;
			}
			if(flag==0)
				printf("NO\n");
		}
		for(i=0; i<r; i++)
		{
			delete[] a[i];
			delete[] v[i];
		}
		delete[] a;
		delete[] v;
		v1.clear();
	}
	return 0;
}
