#include<stdio.h>
#include<iostream>
#include<sstream>
#include<string.h>
#include<string>
using namespace std;

string NumberToString(int n)
{
	ostringstream ss;
    ss<<n;
    return ss.str();
}

int main()
{
	string res, str;
	int i, j, k, count, len;
	while(getline(cin, str))
	{
		res="";
		len=str.size();
		for(i=0; i<len; i++)
		{
			count=1;
			for(j=i+1; j<len; j++)
			{
				if(str[j]==str[i])
					count++;
				else
					break;
			}
			if(count>3)
				res+=NumberToString(count)+"!"+str[i];
			else
			{
				for(k=0; k<count; k++)
					res+=str[i];
			}
			i=j-1;
		}
		cout<<res<<endl;
	}
	return 0;
}
