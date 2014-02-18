#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	int len, i, temp;
	string a, c;
	cin>>a;
	while(a!="0")
	{
		c.clear();
		len=a.length();
		int b[len];
		if(a[len-1]!='0')
			b[len-1]=1;
		else
			b[len-1]=0;
		if(len>=2)
		{
			c=a[len-2];
			c+=a[len-1];
			temp=atoi(c.c_str());
			if(temp<=26 && a[len-1]!='0' && a[len-2]!='0')
				b[len-2]=2;
			else if(a[len-1]=='0')
			{
				if(temp<=26)
					b[len-2]=1;
				else
					b[len-2]=0;
			}
			else
				b[len-2]=1;
			c.clear();
		}
		for(i=len-3; i>=0; i--)
		{
			c=a[i];
			c+=a[i+1];;
			temp=atoi(c.c_str());
			if(temp<=26 && a[i]!='0' && a[i+1]!='0')
			{
				if(a[i+2]!='0')
					b[i]=b[i+1]+b[i+2];
				else
					b[i]=b[i+1];
			}
			else
				b[i]=b[i+1];
		}
		printf("%d\n", b[0]);
		cin>>a;
	}
	return 0;
}
