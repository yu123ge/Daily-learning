#include<iostream>//此题有问题，ojac没问题。
using namespace std;
int M(int n)
{
    if(n<0)
        return -n;
        else
    return n;
}
int main(){
    int x[1000];
    int y[1000];
    int a,b,c;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>x[i];
    }
    for(int j=0; j<b; j++)
    {
        cin>>y[j];
    }
     int t,min=2000;
    for(int l=0; x[l]; l++)
    {
        for(int k=0; y[k]; k++)
        {
            t=M(y[k]-x[l]);
            if(t<min)
            {
                min=t;
            }
        }
    }
    cout<<min<<endl;
    return 0;
}
 
