/*
Micro purchased an array A having N integer values. 
After playing it for a while, he got bored of it and decided to update value of its element. 
In one second he can increase value of each array element by 1. 
He wants each array element's value to become greater than or equal to K. 
Please help Micro to find out the minimum amount of time it will take, for him to do so.

Input:
First line consists of a single integer, T, denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K.
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print the minimum time in which all array elements will become greater than or equal to K. 
Print a new line after each test case. 

Constraints:
1<=T<=5
1<=N<=10^5
1<=A[i],K<=10^6

Sample Input

2
3 4
1 2 5
3 2
2 5 5

Sample Output

3
0
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,time=0;
		cin>>n>>k;
		int a[n];
		for(auto i=0;i<n;i++)
		{	
			cin>>a[i];
			if(k-a[i]>time)
				time = k-a[i];
		}
		cout<<time<<endl;
	}
	return 0;
}