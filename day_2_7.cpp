#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for(int s=num-i;s>0;s--){
            cout<<" ";
        }
        for (int j = i; j >0; j--)
        {
            cout<<j;
        }
       if(i>1)
       { 
        for(int k=0;k<i-1;k++){          
                cout<<k+2;
       }
       }
        cout<<endl;
    } 
}