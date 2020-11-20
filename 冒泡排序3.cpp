#include<bits/stdc++.h>
using namespace std;
	int a[10]; 

	void bubbleSort() {
		for(int i=1;i<=10;i++)cin>>a[i];
		for(int j=1;j<10;j++){
			for(int i=1;i<10;i++){
				if(a[i]<a[i+1]){
				swap(a[i],a[i+1]) ;
				}
			}
			
			
		}
		
	}
	int main(){
		bubbleSort();
		for(int i=1;i<=10;i++){cout<<a[i]<<" ";
		}
	return 0;
}
