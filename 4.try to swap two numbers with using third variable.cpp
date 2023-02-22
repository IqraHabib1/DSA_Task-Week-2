#include<iostream>
using namespace std;
int main()
{
	int a,b,t;


	cout<<"Enter First number : "<<"  ";
	cin>>a;
	cout<<"Enter Second number : "<<"  ";
	cin>>b;

	cout<<" Before Swapping Numbers are :"<<"  "<< a<<"  "<<b;
	t=a;
	a=b;
	b=t;
	cout<<"\n After Swapping numbers are :"<<"  "<<a<<"  "<<b;
}
