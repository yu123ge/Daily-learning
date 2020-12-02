#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[100+5]; 
	
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if(isalpha(s[i]))
		cout<<s[i];
	}

	
	return 0;
} 
