/*Write a program to find largest number in an array that is not a perfect cube such that complexity must be of the order O(n).
Input: arr[] = {16, 8, 25, 2, 3, 10} 
Output: 25
25 is the largest number that is not a perfect cube. 
Input: arr[] = {36, 64, 10, 16, 29, 25}
Output: 36
*/
#include <bits/stdc++.h>
using namespace std;
bool checkPerfectcube(int n)
{
    int d = cbrt(n);
    if (d * d * d == n)
        return true;
    return false;
}
int largestNonPerfectcubeNumber(int a[], int n)
{
    int maxi = -1;
    for (int i = 0; i < n; i++) 
        if (!checkPerfectcube(a[i]))
            maxi = max(a[i], maxi); 
    return maxi;
}
int main()
{
    int a[50],n;
 	cout<<"Enter the number of elements in array: ";
 	cin>>n;
 	cout<<"Enter the array:\n";
 	for(int i=0;i<n;i++)
 		cin>>a[i];
    cout<<"The largets non perfect cube is: "<<largestNonPerfectcubeNumber(a, n);
    return 0;
}