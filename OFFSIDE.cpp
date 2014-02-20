#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main()
{
    int a, d, temp, i;
    vector<int> v1, v2;
    scanf("%d%d", &a, &d);
    while(a!=0 && d!=0)
    {
        for(i=0; i<a; i++)
        {
            scanf("%d", &temp);
            v1.push_back(temp);
        }
        for(i=0; i<d; i++)
        {
            scanf("%d", &temp);
            v2.push_back(temp);
        }
        sort(v1.begin(), v1.end(), myfunction);
        sort(v2.begin(), v2.end(), myfunction);
        if(d==1)
            printf("N\n");
        else
        {
            if(v2[0]>v1[0])
                printf("Y\n");
            else if(v2[0]==v1[0] && v2[1]==v1[0])
                printf("N\n");
            else if(v2[0]<v1[0] && v1[0]>=v2[1])
                printf("N\n");
            else if(v2[0]<=v1[0] && v1[0]<v2[1])
                printf("Y\n");
            else
            	printf("N\n");
        }
		v1.clear();
		v2.clear();
        scanf("%d%d", &a, &d);
    }
    return 0;
}
