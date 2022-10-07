/*
Problem Link: https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
This year Santa wants to make a Christmas tree.
But this time he wants to decorate it with numbers as in the Pascal’s triangle.
But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.

Input:
In the first line, you will be given ”t” no. of test cases.
For each test case, you will be given a whole number “N”.

Output:
For each value N, Print the first N lines in Christmas tree.

Constraints:
1≤T≤100
1 ≤ N ≤ 40

Sample Input:
2
3
5

Sample Output:
1
1 1
1 2 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long int triangle[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<=i;j++)
      {
        if(j==0 || j==i)
          triangle[i][j]=1;
        else
          triangle[i][j]=triangle[i-1][j-1] + triangle[i-1][j];
        cout<<triangle[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
