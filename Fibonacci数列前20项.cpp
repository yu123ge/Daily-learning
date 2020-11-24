#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int a[20]={1,1};
	for(i=2;i<20;i++)
	a[i]=a[i-2]+a[i-1];
	for(i=0;i<20;i++){
		cout<<a[i]<<"\n";
	}
	
	
	return 0;
}
