#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;

	char str[20];
		
	cout<<"Enter a String "<<" : ";
	cin>>str;
   
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
		str[i]=str[i]+32;
		}
		
	}
	cout<<"String in Lower Case "<<str;
}
