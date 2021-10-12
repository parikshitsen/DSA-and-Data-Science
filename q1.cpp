/*Take three numbers input from keyboard and print their values in descending order. (Like variable a, b 
and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5)
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter number 1: ";
	cin>>a;
	cout<<"Enter number 2: ";
	cin>>b;
	cout<<"Enter number 3: ";
	cin>>c;
	cout<<"The numbers in descending order are: ";
	if(a>=b)
	{
		if(a>=c)
		{
			cout<<a<<" ";
			if(b>=c)
			{
				cout<<b<<" ";
				cout<<c<<" ";
			}
			else
			{
				cout<<c<<" ";
				cout<<b<<" ";
			}
		}
		else
			cout<<c<<" "<<a<<" "<<b;
	}
	else
	{
		if(b>=c)
		{
			cout<<b<<" ";
			if(a>=c)
			{
				cout<<a<<" ";
				cout<<c<<" ";
			}
			else
			{
				cout<<c<<" ";
				cout<<a<<" ";
			}
		}
		else
			cout<<c<<" "<<b<<" "<<a;
	}
	return 0;
}