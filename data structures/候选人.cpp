#include<bits/stdc++.h>
using namespace std;
struct Person {
char name[20];
int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
int T;
char name[20];
int main(){
cin>>T;
while(T--){
cin>>name;
if(strcmp(name,"Li")==0)++leader[0].count;
if(strcmp(name,"Zhang")==0)++leader[1].count;
if(strcmp(name,"Fun")==0)++leader[2].count;
}
for(int i=0;i<3;i++)cout<<leader[i].name<<":"<<leader[i].count<<endl;
return 0;
}

