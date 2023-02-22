#include<iostream>
using namespace std;
int main()
{
	int i,n;
int n1=0;
int n2=1;
int fibs;
int num;
cout<<"Enter the value :";
cin>>num;
cout<<"The Fibonaci series is :";
cout<<n1<<"  "<<n2;
for(i=1;i<=num-2;i++)
{
	fibs=n1+n2;
	n1=n2;
	n2=fibs;
	cout<<" "<<fibs<<"  ";
	}
	return 0;	
}
