#include<stdio.h>
#include<string.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        gcd(b, a%b);
}
int main()
{
	int t, n, c, i, len, p, flag;
 	char str[50];
 	scanf("%d", &t);
 	while(t--) 
 	{
 		c=0;
		flag=1;
 		scanf("%s", str);
  		len=strlen(str);
  		for(i=len-1; i>=0; i--)
  		{
   			if(str[i]=='.')
			{
    			flag=0;
    			break;
   			}
   			else
    			c++;
  		}
  		n=0;
		for(i=0; i<len; i++)
  		{
   			if(str[i]!='.')
   				n=(str[i]-'0')+10*n;
  		}
  		p=1;
  		if(flag==0)
		{
  			for(i=0; i<c; i++)
   				p=p*10;
  		}
  		printf("%d\n", p/gcd(n,p));
 	}
 	return 0;
}
