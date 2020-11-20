#include<bits/stdc++.h>
using namespace std;
	int a[6]={cin>>n}; 
	void bubbleSort() {
		int t;
		for(int j=1;j<5;j++){
			for(int i=1;i<5;i++){
				if(a[i]<a[i+1]){
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
			}
			
			
		}
		
	}
	int main(){
		bubbleSort();
		for(int i=1;i<=5;i++){cout<<a[i]<<" ";
		}
	return 0;
}
