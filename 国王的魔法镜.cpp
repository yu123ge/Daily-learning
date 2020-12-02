#include<bits/stdc++.h>
using namespace std;
bool sysmetric(string s){
	string t=s;
	reverse(t.begin(),t.end());
	return s==t;
}
int main(){
	int N;
	cin>>N;
	while(N--){
		string s;
	    cin>>s;
		//cout<<sysmetric(s)<<endl;
		while(s.size()%2==0 and s.size()>0 and sysmetric(s)){
			s=s.substr(0,s.size()/2);
			//cout<<s<<endl;
		}
		cout<<s.size()<<endl;
	}
	return 0;
}
