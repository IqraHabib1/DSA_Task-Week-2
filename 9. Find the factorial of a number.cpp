#include<iostream>
using namespace std;
int main()
{
	int i,n;
	long fact=1.0;
	cout<<"Enter a positive integar :";
	cin>>n;
	if(n<0)
	cout<<"error! Factorial of a negative number does not exists ";
	else
	{
		for(i=1;i<=n;i++)
		fact *=i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact;
}
