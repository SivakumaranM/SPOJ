#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int k1, k2, k3, len, i, j;
	vector<int> p1, p2, p3;
	vector<char> c1, c2, c3, temp;
	char c;
	string str;
	while(scanf("%d %d %d", &k1, &k2, &k3) && k1!=0 && k2!=0 && k3!=0)
	{
		cin>>str;
		len=str.size();
		for(i=0; i<len; i++)
		{
			if(str[i]>='a' && str[i]<='i')
			{
					p1.push_back(i);
					c1.push_back(str[i]);
			}
			else if(str[i]>='j' && str[i]<='r')
			{
				p2.push_back(i);
				c2.push_back(str[i]);
			}
			else
			{
				p3.push_back(i);
				c3.push_back(str[i]);
			}
		}
	
		for(i=0; i<k1; i++)
		{
			c=c1[c1.size()-1];
			for(j=c1.size()-1; j>0; j--)
				c1[j]=c1[j-1];
			c1[0]=c;
		}
		for(i=0; i<p1.size(); i++)
			str[p1[i]]=c1[i];
			
		for(i=0; i<k2; i++)
		{
			c=c2[c2.size()-1];
			for(j=c2.size()-1; j>0; j--)
				c2[j]=c2[j-1];
			c2[0]=c;
		}
		for(i=0; i<p2.size(); i++)
			str[p2[i]]=c2[i];
		
		for(i=0; i<k3; i++)
		{
			c=c3[c3.size()-1];
			for(j=c3.size()-1; j>0; j--)
				c3[j]=c3[j-1];
			c3[0]=c;
		}
		for(i=0; i<p3.size(); i++)
			str[p3[i]]=c3[i];
			
		cout<<str<<endl;
		
		p1.clear();
		p2.clear();
		p3.clear();
		c1.clear();
		c2.clear();
		c3.clear();
	}
	return 0;
}
