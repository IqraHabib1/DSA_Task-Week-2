#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	
	char str[i];
	cout<<"Enter String "<<" : ";
	cin>>str;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
		str[i]=str[i]-32;
		}
		
	}
	cout<<"String in Upper Case "<<str;
}
