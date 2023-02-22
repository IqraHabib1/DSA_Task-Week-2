#include<iostream>
using namespace std;
int main()
{
	int n,a,rev;

rev=0;
	cout<<"Enter number : "<<"  ";
	cin>>n;
	while(n!=0)
	{
	a=n%10;
	rev=a+(rev*10);
	n=n/10;
	}

	cout<<"\n Reverse number is :"<<"  "<<rev;
} 
