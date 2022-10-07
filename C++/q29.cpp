/*
Problem Link: https://www.hackerearth.com/problem/algorithm/city-tour/
A vertex is considered as a point with both its coordinates as integers.
You are initially at the origin of a 2D surface. You can move by the following rules:

One move is counted as a vertex to an adjacent vertex. You cannot jump, and can only move to an adjacent vertex.
For example, if you are at point A(x,y) , then you may move to any of the points  B, C, D, E (defined below),
A(x,y)  to  B(x,y-1) or C(x,y+1) or D(x+1,y) or E(x-1,y)

Distance from origin should increase with each move.
Distance from origin for a vertices (a,b) is:
Dis(a,b) = abs(a) + abs(b) where abs() is absolute value

Both rules must be satisfied for every move
For a given number of steps (N), calculate the count of possible final position vertices you may end in
if you initially started from the origin.

Constraints :
1≤t≤50
1≤N≤10^12

Input Format:
First Line: Number of test cases (t)
Next "t" Line: Integer N representing the number of steps

Output Format:
  For each test case output: Count of possible final position vertices starting from origin.

Sample Input:
2
3
1

Sample Output:
12
4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    cout<<4*n<<endl;
  }
  return 0;
}
