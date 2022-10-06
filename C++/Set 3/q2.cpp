/*Write a program to find Number of pairs in an array with the sum greater than 0. Try to keep complexity below O(n^2)
Input: arr[] = { 3, -2, 1 }
Output: 2
Explanation: There are two pairs of elements in the array whose sum is positive. They are:
{3, -2} = 1
{3, 1} = 4 
Input: arr[] = { -1, -1, -1, 0 }
Output: 0
Explanation: There are no pairs of elements in the array whose sum is positive*/
#include <iostream>
using namespace std;
int main()
{
	int a[50],n,count=0;
	cout<<"Enter the number of elements in array: ";
 	cin>>n;
 	cout<<"Enter the array:\n";
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	for(int i=0;i<n;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[i]+a[j]>0)
 			{
 				count+=1;
 			}
 		}
 	}
 	cout<<"The number of pairs are: "<<count;
	return 0;
}