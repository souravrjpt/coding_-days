#include <bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"enter the year: ";
    cin>>year;
    if(((year%400==0)||(year%100!=0))&&(year%4==0))
    cout<<"this is a leap year";
    else
    cout<<"not a leap year";
    cout<<endl;
}