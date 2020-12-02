#include<bits/stdc++.h>
using namespace std;
int main(){
	int j=0;
	char s[100+5];
	cin>>s;
	for(int i=0;s[i]!=0;i++){
		if(isalpha(s[i])){
			 j=j+1;
			 
		}
		
	}
cout<<j;
	
	
	return 0;
	
}
