#include<bits/stdc++.h>
using namespace std;
const int B[7]={100,50,20,10,5,2,1};
int f(int m){
int tot=0;
for(int i=0;i<7;i++){
tot+=m/B[i];
m%=B[i];
}
return tot;
}
int main(){
int n;
int tot=0;
while(cin>>n&&n){
for(int i=0;i<n;i++){
int m;cin>>m;
tot+=f(m);
}
cout<<tot<<endl;
}
return 0;
}

