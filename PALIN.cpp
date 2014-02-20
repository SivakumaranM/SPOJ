#include<stdio.h>
#include<iostream>
#include<sstream>
using namespace std;

bool isPalin(string s)
{
	int i, j;
	if(s[0]!='0')
	{
		for(i=0, j=s.size()-1; i<=j; i++, j--)
		{
			if(s[i]!=s[j])
				return false;
		}
		return true;
	}
	else
	{
		for(i=1, j=s.size()-1; i<=j; i++, j--)
		{
			if(s[i]!=s[j])
				return false;
		}
	return true;
	}
}

int main()
{
	int t, n, i, j, k, flag;
	scanf("%d", &t);
	string s;
	while(t--)
	{
		flag=0;
		cin>>s;
		string str='0'+s;
		for(i=1, j=str.size()-1; i<=j; i++, j--)
		{
			if(flag==1)
			{
				while(i<=j)
				{
					str[j]=str[i];
					i++;
					j--;
				}
				break;
			}
			if(i==j)
			{
				if(str[i]!='9')
				{
					str[i]++;   
					break;
				}
				else
				{
					k=i;
					while(k>0 && str[k]=='9')
					{
						str[k]='0';
						k--;
					}
					str[k]++;
					i=k-1;
					j=str.size()-i;
					flag=1;
					continue;
				}
			}
			else if((i+1)==j)
			{
				if((int)str[j] < (int)str[i])
				{
					str[j]=str[i];
					break;
				}
				else
				{
					if(str[i]=='9')
					{
						str[j]='0';
						k=i;
						while(k>0 && str[k]=='9')
						{
							str[k]='0';
							k--;
						}
						str[k]++;
						i=k-1;
						j=str.size()-i;
						flag=1;
						continue;
					}
					else
					{
						str[i]++;
						str[j]=str[i];
						break;
					}
				}
			}
			if(str[j]==str[i])
			{
				continue;
			}
			else
			{
				if((int)str[j] < (int)str[i])
				{
					str[j]=str[i];
					if(isPalin(str))
					{
						break;
					}
					continue;
				}
				else
				{
					str[j]=str[i];
					continue;
				}
			}
		}
		if(str[0]=='0')
			cout<<str.substr(1, str.size()-1)<<endl;
		else
		{
			if(str[0]==str[str.size()-1])
				cout<<str<<endl;
			else
			{
				str[str.size()-1]++;
				cout<<str<<endl;
			}
		}
	}
	return 0;
}
