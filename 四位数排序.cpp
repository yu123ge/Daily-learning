#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d; 
	cin>>a>>b>>c>>d;
	for(int i=1;i<4;i++){
	
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	if(c>d)swap(c,d);}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	
	
	
	
	return 0;
}
