#include <bits/stdc++.h>
using namespace std;
int main(){
    int ch;
    int n;
    ch= 64;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=0;j<i;j++){
        cout<<char(ch+i+j)<<" ";
       }
       cout<<endl;
        
    }
    // cout<<endl;
}