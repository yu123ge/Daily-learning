#include<bits/stdc++.h>
using namespace std;
void binary_print(int n){
	cout<<setw(5)<<n<<"(10) =";
	for(int i=31;i>=0;i--){
		if(i%8==7)cout<<" ";
		cout<<((n>>i)&1);
	}
	cout<<"(2)"<<endl;
}
int main(){
	binary_print(6);
	binary_print(-6);
	
}
