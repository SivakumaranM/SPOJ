#include<iostream>
#include<string>
#include<stdio.h>
#include<stack>
#include<cstring>
using namespace std;

int priority(char a)
{
	if(a=='^')
		return 3;
	else if(a=='*'||a=='/')
		return 2;
	else if(a=='+'||a=='-')
		return 1;
	return 0;
}

int main()
{
	char str[400], ch;
	stack<char> s;
	int t, i, k;
	scanf("%d", &t);
	while(t--)
	{
		k=0;
		char res[400]="";
		cin>>str;
		for(i=0; i<strlen(str); i++)
		{
			if(str[i]=='(')
				s.push(str[i]);
			else if(str[i]==')')
			{
				ch=s.top();
				s.pop();
				while(ch!='(')
				{
					res[k++]=ch;
					ch=s.top();
					s.pop();
				}
			}
			else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^')
			{
				while(!s.empty() && priority(str[i])<=priority(ch))
				{
					ch=s.top();
					s.pop();
					res[k++]=ch;
				}
				s.push(str[i]);
			}
			else
				res[k++]=str[i];
		}
		while(!s.empty())
		{
			ch=s.top();
			res[k++]=ch;
			s.pop();
		}
		cout<<res<<endl;
	}
	return 0;
}
