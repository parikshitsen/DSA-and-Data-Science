/*Write a program to find GCD of any array having more than two element*/
#include<iostream>
using namespace std;
int calGCD(int a, int b)
{
	if(a==0)
		return b;
	return calGCD(b%a,a);
}
int arrGCD(int a[], int n)
{
	int result = a[0];
	for(int i=1;i<n;i++)
	{
		result = calGCD(a[i],result);
		if(result==1)
			return 1;
	}
	return result;
}
int main()
{
	int arr[20],n,res;
	cout<<"Enter the number of elements in array: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	res = arrGCD(arr,n);
	cout<<"The GCD of the given array is: "<<res;
	return 0;
}