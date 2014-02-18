#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main()
{
	int t;
	string str;
	set<char> s;
	set<char>::iterator it;
	scanf("%d", &t);
	map<char,int> m;
	for(char c='a'; c<='z'; c++)
		m[c]=0;
	while(t--)
	{
		cin>>str;
		m[str[0]]++;
		if(m[str[0]]==5)
			s.insert(str[0]);
	}
	if(s.empty())
		printf("PREDAJA");
	else
		for(it=s.begin(); it!=s.end(); it++)
			printf("%c",*it);
	return 0;
}
