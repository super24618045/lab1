#include<iostream>
using namespace std;
int main()
{
	int a=22;
	
	while(1)
	{
	cout<<a<<endl;
	if(a==1)
	{break;}
	if(a%2!=0)
	{a=3*a+1;}
	else
	{a=a/2;}
	}
return 0;
}
