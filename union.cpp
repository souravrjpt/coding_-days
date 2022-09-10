#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={4,5,6,5,6};
    
    int d[10]={0};
    int count=0;
    int mark=-1;
    for (int  i = 0; i <5; i++)
    {
        d[i]=a[i];
        count++;
    }
    
    for(int i=0;i<5;i++){
        d[i+count]=b[i];
        // cout<<d[i]<<endl;
    }

    for(int i=0;i<10;i++ ){
        for(int j=i+1;j<10;j++){
            if(d[i]==d[j])
            d[i]=mark;
        }
    }

    
     for(int i=0;i<10;i++){
        if(d[i]>0)
        cout<<d[i]<<" ";
    }

   
    
}