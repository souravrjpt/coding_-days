#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,count=1;
    cout<<"enter the number ";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        for(int j=num-i;j>0;j--){
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
             cout<<i+j<<" ";
            count++;
        }
        
        cout<<endl;
    }
   
    
}