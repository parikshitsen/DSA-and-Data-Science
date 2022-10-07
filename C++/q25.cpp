/*
Roy likes Symmetric Logos.

How to check whether a logo is symmetric?
Align the center of logo with the origin of Cartesian plane. 
Now if the colored pixels of the logo are symmetric about both X-axis and Y-axis, then the logo is symmetric.

You are given a binary matrix of size N x N which represents the pixels of a logo.
1 indicates that the pixel is colored and 0 indicates no color.

For instance: Take a 5x5 matrix as follows:

 0 1 1 1 0

 0 1 0 1 0
 
 1 0 0 0 1
 
 0 1 0 1 0
 
 0 1 1 1 0

Observe that it is symmetric about both X-axis and Y-axis. 

Your task is to output YES if the logo is symmetric else output NO.

Input:
First line contains T - number of test cases.
T test cases follow.
First line of each test case contains the N - size of matrix.
Next N lines contains binary strings of length N.

Output:
Print YES or NO in a new line for each test case

Constraints:
1 ≤ T ≤ 10
2 ≤ N ≤ 32

Note: There will always be atleast 1 colored pixel in input data. 

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string img[n];
		for(int i=0;i<n;i++)
		{	
			cin>>img[i];
		}
		bool flag=1;
		for(int i=0,j=n-1;i<j;i++,j--)
		{
			if(img[i]!=img[j])
			{
				flag=0;
				break;
			}
		}
		for (int i = 0; i < n; i++)
        	for (int j = i+1; j < n; j++)
            swap(img[i][j], img[j][i]);
        for(int i=0,j=n-1;i<j;i++,j--)
		{
			if(img[i]!=img[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}