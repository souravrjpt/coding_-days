#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    // for(int i=num;i>0;i--){
    //     for(int j=i;j>0;j--)
    //    cout<<" ";
    // }
    for (int i = 1; i <= num; i++)
    {
        for(int s=num-i;s>0;s--){
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<i+j;
        }
          

       if(i>1){
        for(int k=i;k<num+2;k++){
            for(int l=i;l>0;l--){
                cout<<l+1;
            }

        }
       

       }
        cout<<endl;
    }
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
            
    //     }
    // }

    
}