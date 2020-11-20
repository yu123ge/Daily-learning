#include<bits/stdc++.h>
using namespace std;  
     int a[11]=(0,1,2,3,4,5,6,7,8,9,10);
	void bubbleSort() {
		int t
		for(int j=1;j<10;j++){
		
			for(int i=1;i<10;i++){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
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
