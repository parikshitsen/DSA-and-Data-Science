/* Write a program to find a raised to the power of b [Using recursion].*/
#include<iostream>
using namespace std;
int myPow(int a,int b)
{
	if(b!=0)
		return (a*myPow(a,b-1));
	else
		return 1;
}
int main()
{
	int a,b,res;
	cout<<"Enter the base number: ";
	cin>>a;
	cout<<"Enter the positive exponent: ";
	cin>>b;
	res = myPow(a,b);
	cout<<"base^exponent = "<<res;
	return 0;
}