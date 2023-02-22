#include<iostream>
using namespace std;
int main()
{
	int num,originalnum,remainder,result=0;
	cout<<"Enter two or more number digits :";
	cin>>num;
	originalnum=num;
	while(originalnum !=0)
	{
		remainder =originalnum %10;
		result+=remainder* remainder*remainder;
		originalnum/=10;
	}
	if(result==num)
	cout<<"Number is armstrong ";
	else
	cout<<"Number is not armstrong ";
}
