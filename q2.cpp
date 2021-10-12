/*Write a program to check whether the given number of three digits is palindrome or not.[Do not use loops]*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to be checked: ";
	cin>>n;
	if(n%10==n/100)
		cout<<"The number is palindrome";
	else
		cout<<"The number is not palindrome"; 
	return 0;
}