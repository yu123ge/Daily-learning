#include<bits/stdc++.h>
using namespace std;
	int a[4]={0,18,11,34};
	void bubbleSort() {
		int t;
		
			for(int i=1;i<3;i++){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
				}
			
			
			
		}
		
	}
	int main(){
		bubbleSort();
		for(int i=1;i<=3;i++){cout<<a[i]<<" ";
		}
	return 0;
}
