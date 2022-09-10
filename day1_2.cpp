#include <bits/stdc++.h>
using namespace std;
int main(){
    int first,second,third;
    cout<<"enter the first number: ";
    cin>>first;
    cout<<"enter the second number: ";
    cin>>second;
    cout<<"enter the third number: ";
    cin>>third;
    int result;
    result=first>second?(first>third?first:third):(second>third?second:third);
    cout<<"the biggest number is: "<<result<<endl;
}