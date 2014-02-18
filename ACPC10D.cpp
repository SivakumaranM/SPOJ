#include<stdio.h>
#include<iostream>

using namespace std;

long mini(long x, long y)
{
        if(x<y)
                return x;
        else 
                return y;
}

long mini(long x, long y, long z)
{
        if(x<y)
                return ((x<z) ? x : z);
        else
                return ((y<z) ? y : z);
}

long mini(long p, long q, long r, long s)
{
        if((p<=q) && (p<=r) && (p<=s))
                return p;
        else if((q<=p) && (q<=r) && (q<=s))
                return q;
        else if((r<p) && (r<q) && (r<s))
                return r;
        else
                return s;
}

int main()
{
        int n, i, j, k=0;
		long **a;
        while(1)
        {
                        scanf("%d", &n);
                        if(n==0)
                                break;
                        k++;
                        a=new long * [n];
                        for(i=0; i<n; i++)
                                a[i]=new long[3];
                        for(j=0; j<3; j++)
                                scanf("%ld", &a[0][j]);
                        a[0][2]+=a[0][1];
                        for(i=1; i<n; i++)
                               {
                                       for(j=0; j<3; j++)
                                       {
                                               scanf("%ld", &a[i][j]);
                                               if(i==1)
                                               {
                                                       if(j==0)
                                                               a[i][j]+=a[i-1][j+1];
                                                        else if(j==1)
                                                                a[i][j]+=mini(a[i][j-1], a[i-1][j], a[i-1][j+1]);
                                                        else if(j==2)
                                                                a[i][j]+=mini(a[i][j-1], a[i-1][j-1], a[i-1][j]);
                                                }
                                                else
                                                {
                                                        if(j==0)
                                                                a[i][j]+=mini(a[i-1][j+1], a[i-1][j]);
                                                        else if(j==1)
                                                                a[i][j]+=mini(a[i][j-1], a[i-1][j-1], a[i-1][j], a[i-1][j+1]);
                                                        else if(j==2)
                                                                a[i][j]+=mini(a[i][j-1], a[i-1][j-1], a[i-1][j]);
                                                }
                                        }
                                }
                        printf("%d. %ld\n", k, a[n-1][1]);
        }
        return 0;
}
