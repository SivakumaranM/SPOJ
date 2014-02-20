#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	int n, i, j, n1, n2, ans;
	int a[4], b[4];
	map<char,int> m;
	scanf("%d", &n);
	string s1, s2;
	m['2']=2;
	m['3']=3;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=7;
	m['8']=8;
	m['9']=9;
	m['m']=1000;
	m['c']=100;
	m['x']=10;
	m['i']=1;
	while(n--)
	{
		int temp;
		string res="";
		cin>>s1>>s2;
		for(i=0; i<4; i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(j=0; j<s1.size(); j++)
		{
			if(s1[j]=='2'||s1[j]=='3'||s1[j]=='4'||s1[j]=='5'||s1[j]=='6'||s1[j]=='7'||s1[j]=='8'||s1[j]=='9')
			{
				if(s1[j+1]=='m')
				{
					a[0]=m.find(s1[j])->second*1000;
					j++;;
				}
				else if(s1[j+1]=='c')
				{
					a[1]=m.find(s1[j])->second*100;
					j++;
				}
				else if(s1[j+1]=='x')
				{
					a[2]=m.find(s1[j])->second*10;
					j++;
				}
				else if(s1[j+1]=='i')
				{
					a[3]=m.find(s1[j])->second;
					j++;
				}
			}
			else
			{
				if(s1[j]=='m')
					a[0]=1000;
				else if(s1[j]=='c')
					a[1]=100;
				else if(s1[j]=='x')
					a[2]=10;
				else if(s1[j]=='i')
					a[3]=1;
			}
		}
		for(i=0; i<s2.size(); i++)
		{
			if(s2[i]=='2'||s2[i]=='3'||s2[i]=='4'||s2[i]=='5'||s2[i]=='6'||s2[i]=='7'||s2[i]=='8'||s2[i]=='9')
			{
				if(s2[i+1]=='m')
				{
					b[0]=m.find(s2[i])->second*1000;
					i++;;
				}
				else if(s2[i+1]=='c')
				{
					b[1]=m.find(s2[i])->second*100;
					i++;;
				}
				else if(s2[i+1]=='x')
				{
					b[2]=m.find(s2[i])->second*10;
					i++;
				}
				else if(s2[i+1]=='i')
				{
					b[3]=m.find(s2[i])->second;
					i++;
				}
			}
			else
			{
				if(s2[i]=='m')
					b[0]=1000;
				else if(s2[i]=='c')
					b[1]=100;
				else if(s2[i]=='x')
					b[2]=10;
				else if(s2[i]=='i')
					b[3]=1;
			}
		}
		n1=a[0]+a[1]+a[2]+a[3];
		n2=b[0]+b[1]+b[2]+b[3];
		ans=n1+n2;
		temp=ans/1000;
		if(temp==1)
			res+='m';
		else if(temp!=0)
		{
			res+='0'+temp;
			res+='m';
		}
		ans=ans%1000;
		temp=ans/100;
		string str[1];
		if(temp==1)
			res+='c';
		else if(temp!=0)
		{
			res+='0'+temp;
			res+='c';
		}
		ans=ans%100;
		temp=ans/10;
		if(temp==1)
			res+='x';
		else if(temp!=0)
		{
			res+='0'+temp;
			res+='x';
		}
		ans=ans%10;
		temp=ans;
		if(temp==1)
			res+='i';
		else if(temp!=0)
		{
			res+='0'+temp;
			res+='i';
		}
		cout<<res<<endl;
	}
	return 0;
}
