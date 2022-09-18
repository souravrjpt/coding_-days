#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=num;i>0;i--){
        for(int j=num-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0;i<=num;i++){
        for(int j=num-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
       cout<<endl;
    }
     
}