#include<bits/stdc++.h>
using namespace std;
int main(){
    int date,month,year;
   int month_code[12]={1,4,4,0,2,5,0,3,6,1,4,6};
   int year_code;
   cout<<"(Kindly enter the date in the following pattern: DD|MM|YYYY )";
   cout<<"Enter the date: ";
   cin>>date;
   cout<<"Enter the month: ";
   cin>>month;
   cout<<"Enter the year: ";
   cin>>year;

   
   //for year code
   
  int for_year=year*0.01;
   if(for_year%4==0)
   year_code=6;
   else if(for_year%4==1)
   year_code=4;
   else if(for_year%4==2)
   year_code=2;
   else
   year_code=0;


//for first two digits of year
int two_digit=year/100;

//for last two digits of year
int ans=year-two_digit*100;


//main logic
int result=date+ans+month_code[month-1]+year_code+(ans/4);
int result_date=result%7;



//if the entered year is leap year then we will subtract 1 from our end result....
   if((year%4==0 && year%100!=0)||year%400==0){
    result_date=result%7-1;
   }
else
result_date;


switch(result_date)
 {
       
        case 1:cout<<"sunday";
        break;
        case 2:cout<<"monday";
        break;
        case 3:cout<<"tuesday";
        break;
        case 4:cout<<"wednesday";
        break;
        case 5:cout<<"thursday";
        break;
        case 6:cout<<"friday";
        break;
        case 0:cout<<"saturday";
        break;
    }





}