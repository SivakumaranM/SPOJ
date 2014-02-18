#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

string reverse(string s)
{
	string res="";
	for(int i=0; i<s.length(); i++)
		res=s[i]+res;
	return res;
}
int main()
{
	int t, i, j, flag=1;
	scanf("%d", &t);
	vector<string> a;
	while(t--)
	{
		string str;
		cin>>str;
		for(i=0; i<str.length(); i++)
		{
			for(j=1; j<str.length()-i+1; j++)
				a.push_back(str.substr(i, j));
		}
		flag=1;
		for(i=0; i<a.size(); i++)
		{
			a[i]=reverse(a[i]);
			size_t found=str.find(a[i]);
			if (found==string::npos)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
		a.clear();
	}
	return 0;
}
