#include<iostream>
using namespace std;
int main()
{
	int n,i,range;


	cout<<"Enter number "<<" : "<<"  ";
	cin>>n;
	cout<<"Enter the range of table"<<" : "<<"  ";
	cin>>range;
	cout<<"   \n   ";
	cout<<"TABLE OF GIVEN NUMBER IS SHOWN BELOW ";
	
   for(i=1;i<=range;i++)
   {
   
  cout<<"\n"<<  n  <<"  *  "<<  i  <<"  =  "<<  n * i  <<"\n";
  
}
  
} 
