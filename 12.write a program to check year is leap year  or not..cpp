#include<iostream>
using namespace std;
int main()
{
  int year;
  cout<<" Enter Year that you want to check "<<" : "<<"  ";
  cin>>year;
  if(year%400==0)
  {
  	cout<<"Year is Leap Year ";
  }
 
   else if(year%100==0)
  {
  		cout<<"Year is not Leap Year ";
  }
   else if(year%4==0)
  {
  		cout<<"Year is Leap Year ";
  }
  else
  { 
  cout<<"Year is not leap Year ";
  }
}
