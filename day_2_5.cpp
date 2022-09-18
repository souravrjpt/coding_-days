#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=65,n;
    cout<<"enter the number: ";
    cin>>n;
    for (int  i=1;i<=n;i++)
    {
       for(int j=i;j>0;j--){
        cout<<char(a+n-j)<<" ";
       }
       cout<<endl;
    }
    
}