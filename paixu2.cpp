#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	for(int i=1;i<=10;i++)cin>>a[i];
	for(int i=1;i<=10;i++){
	
	if(a[i]<a[i+1])swap(a[i],a[i+1]); 
}
	for(int i=1;i<=10;i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl;
	
	
	return 0;
} 
