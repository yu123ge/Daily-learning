#include<bits/stdc++.h>
using namespace std;
struct date{
int y,m,d;
inline bool leap(){
return y%4==0&&y%100!=0||y%400==0;
}
inline int getMonthDay(int m){
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)return 31;
if(m==4||m==6||m==9||m==11)return 30;
if(leap())return 29;
return 28;
}
};
int days(date d){
int ret=d.d;
for(int i=1;i<d.m;i++)
ret+=d.getMonthDay(i);
return ret;
}
int main(){
date d;
cin>>d.y>>d.m>>d.d;
cout<<days(d)<<endl;
return 0;
}

