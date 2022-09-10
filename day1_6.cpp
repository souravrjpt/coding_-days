#include <bits/stdc++.h>
using namespace std;
int main(){
    int first,second,third;
    cout<<"Enter the sides of triangle:"<<endl;
    cout<<"frist side";
    cin>>first;
     cout<<"second side";
    cin>>second;
     cout<<"third side";
    cin>>third;
    if ((first+second)>third&&(second+third)>first&&(third+first)>third){
        if(first==second==third){
            cout<<"EQUILATERAL TRIANGLE";
        }
            else if((first==second))
        cout<<"ISOSCELES TRIANGLE";
        else
        {
            cout<<"SCALENE TRIANGLE";
        }
    }
    else{
        cout<<"not a triangle";
    }
    


}