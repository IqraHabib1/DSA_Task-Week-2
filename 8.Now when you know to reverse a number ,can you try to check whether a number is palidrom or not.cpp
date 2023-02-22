#include<iostream>
using namespace std;
int main()
{
	int n,reversed=0;
	int remainder, original;
	cout<<"Enter number ";
	cin>>n;
	original=n;
	while(n!=0)
	{
	
	remainder =n%10;
	reversed=reversed*10+remainder;
	n/=10;
}
if(original==reversed)
cout<< "Number is Palindrom ";
else
cout<<"Number is not Palindrom ";
}
