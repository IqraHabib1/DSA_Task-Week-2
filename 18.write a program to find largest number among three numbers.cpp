#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,large;


	cout<<"Enter number"<<"  n1 "<<" : "<<"  ";
	cin>>n1;
	cout<<"Enter number"<<"  n2  "<<" :  "<<"  ";
	cin>>n2;
	cout<<"Enter number"<<"  n3  "<<" :  "<<"  ";
	cin>>n3;
   if (n1>=n2 && n1>=n3)
  {
  	cout<<"largest number is "<<n1<<"   ";  	
  }
  else if(n2>=n1 && n2>=n3)
  {
  	cout<<"largest number is "<<n2<<"   ";  		
  }
  else
  {
  	cout<<"largest number is "<<n3<<"   ";  	
  }
  
  
  
} 
