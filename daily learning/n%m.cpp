#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
ll T,n,m,sum=0,k;
int main(){
cin>>T;
while(T--){
cin>>n>>m;
k=n/m;
n%=m;
sum=k*(m-1)*m/2;
sum+=n*(1+n)/2;
cout<<sum<<endl;
}
return 0;
}

