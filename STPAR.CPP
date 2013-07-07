#include<stdio.h>
#include<iostream>
using namespace std;
class Stack
{
        int t;
        int x[999];
        public:
        Stack()
        {
                t=-1;
        }
        void push(int n)
        {
                x[++t]=n;
        }
        int pop()
        {
                return x[t--];
        }
        int empty()
        {
                if(t>-1)
                        return 0;
                else
                        return 1;
        }
        int top()
        {
                return x[t];
        }
};
 
 
int main()
{
        while(1)
        {
                int n,i,*a,b=1;
                scanf("%d",&n);
                if(n==0)
                        break;
                a=new int[n];
                for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                }
                Stack ob;
                for(i=0;i<n;i++)
                {
                        if(a[i]==b)
                        {
                                b++;
                                continue;
                        }
                        else if(!ob.empty()&&ob.top()==b)
                        {
                                ob.pop();
                                b++;
                                i--;
                        }       
                        else
                        {
                                if(ob.empty())
                                        ob.push(a[i]);
                                else
                                {
                                        if(a[i]>ob.top())
                                        {
                                                b=1500;
                                                break;
                                        }
                                        else
                                        {
                                                ob.push(a[i]);
                                        }
                                }
                        }
                }
                while(!ob.empty())
                {
                        if(ob.pop()==b)
                        {
                                b++;
                        }
                }
                if(b-1==n)
                {
                        printf("yes\n");
                }
                else
                        printf("no\n");
        }
        return 0;
}
