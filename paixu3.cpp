#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],i,t,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[9]);
    return 0;
}
