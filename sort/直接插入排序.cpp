#include<iostream>
#include<cstdio>
#include<cstring>
#include<malloc.h>
#include<cmath>
using namespace::std;
int m;
int n;
int s[1111111];
void Swap(int low,int high){
    int data;
    data=s[low];
    s[low]=s[high];
    s[high]=data;
}
int Partition(int low,int high){
    int pivotkey;
    pivotkey=s[low];
    while(low<high){
        while(low<high&&s[high]>=pivotkey){
            high--;
        }
        Swap(low,high);
        while(low<high&&s[low]<=pivotkey){
            low++;
        }
        Swap(low,high);
    }
    return low;
}
void Qsort(int low,int high){
    int pivot;
    if(low<high){
        pivot=Partition(low,high);
        Qsort(low,pivot-1);
        Qsort(pivot+1,high);
    }
}
void QuickSort(){
    Qsort(1,n);
}
 
int main(){
    while(~scanf("%d",&n)){
        int i,j;
        for(i=1;i<=n;i++)
            scanf("%d",&s[i]);
            QuickSort();
            for(i=1;i<=n;i++)
                cout<<s[i]<<" ";
            cout<<endl;
    }
    return 0;
}
