# include <bits/stdc++.h>
using namespace std  ;
 
int a[101]; 
int n ; 
 
void output(){
 
    for(int i=0; i < n ; i++){
        if(i+1 != n )
        cout<<a[i]<<" ";
        else
        cout<<a[i]<<endl;
    }
}
void InsertSort(){
    for(int i = 0 ; i < n-1 ; i++){    
        int temp = a[i+1];
        for(int j = i ;j >= 0 ;j-- ){
            if(temp < a[j]){
                a[j+1] = a[j];
                a[j]=temp;
            }else{
                break;
            }    
        }
        output();
    }
     
}
 
main(){
    
    cin>>n ;
    for(int i = 0 ; i<n ;i++){
        cin>>a[i];    
    }
    output();
    InsertSort();
    return 0;
}
