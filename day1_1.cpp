#include <bits/stdc++.h>
using namespace std;
int main(){
    int bsal;
    char ch;
    cout<<"Enter the basic salary: ";
    cin>>bsal;
    cout<<"Enter the character: ";
    cin>>ch;
   float hra=0.2*bsal;
   float da=0.5*bsal;
   float pf=0.11*bsal;
   float total;
   float allow;
    cout<<"The total salary: ";
    if(ch=='A'){
        allow=1700;
        total=bsal+hra+da+allow-pf;
    }
    else if(ch=='B')
    {
          allow=1500;
        total=bsal+hra+da+allow-pf;
    }
    else
    {
         allow=1300;
        total=bsal+hra+da+allow-pf;
    }
   cout<< round( total);
    
}

