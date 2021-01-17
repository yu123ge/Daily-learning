#include<bits/stdc++.h>
using namespace std;
const int maxn=50+50;
using ll =long long;
ll F[maxn]={0,1,1};
int main(){
int n;
cin>>n;
for(int i=3;i<=n;i++)F[i]=F[i-1]+F[i-2];
cout<<F[n];
return 0;
}

