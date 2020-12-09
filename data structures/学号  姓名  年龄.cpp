#include<bits/stdc++.h>
using namespace std;
struct student {
int num;
string name;
char sex;
int age;
};
int main(){
int T;cin>>T;
student s;
while(T--){
cin>>s.num>>s.name>>s.sex>>s.age;
cout<<s.num<<" "<<s.name<<" "<<s.sex<<" "<<s.age<<endl;
}
return 0;
}

