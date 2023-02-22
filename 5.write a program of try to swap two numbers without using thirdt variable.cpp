#include<iostream>
using namespace std;
int main()
{
	int a,b;


	cout<<"Enter First number : "<<"  ";
	cin>>a;
	cout<<"Enter Second number : "<<"  ";
	cin>>b;

	cout<<" Numbers are :"<<"  "<< a<<"  "<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  	cout<<"\n Swapping numbers are :"<<"  "<<a<<"  "<<b;
}
