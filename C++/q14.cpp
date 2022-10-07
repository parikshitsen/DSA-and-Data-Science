/* Priniting Patterns Using Loops
Input: 4
Output:
 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4

Solution 1 : Trianlge based approach
a very brute force approach not very optimized, uses a lot of loops
4   4 4 4 4 4   4
4 3   3 3 3   3 4
4 3 2   2   2 3 4
4 3 2 1     2 3 4

4 3 2   2   2 3 4
4 3   3 3 3   3 4
4   4 4 4 4 4   4

Solution 2 : Array based approach

Declare a 2d array of size len x len where len = 2*n-1 and fill the array in cocentric manner
use of a bit less complicated loops but time complexity and space complexity is way too high for bigger inputs

Solution 3 :
See the pattern as co ordinate planes and then solve it by finding the smallest number that needs to be subtracted from n to get the Output
Refer notes and one note
*/
#include <bits/stdc++.h>
using namespace std;
//Solution 3
int main()
{
  int n;
  cin>>n;
  int len;
  len = 2*n-1;
  for(int i=0;i<len;i++)
  {
    for(int j=0;j<len;j++)
    {
      int min = i<j ? i : j;
      min = min < len-i ? min : len-i-1;
      min = min <len-j ? min : len-j-1;
      cout<<n-min<<" ";
    }
    cout<<endl;
  }
  return 0;
}
// Solution 2
/*int main()
{
  int n;
  cin>>n;
  int len = 2*n-1,start,end;
  start=0;
  end=len;
  int a[len][len];
  while(n!=0)
  {
    for(int i=start;i<end;i++)
    {
      for(int j=start;j<end;j++)
      {
        if(i==start || i==end-1 || j==start || j==end-1)
          a[i][j]=n;
      }
    }
    ++start;
    --end;
    --n;
  }
  for(int i=0;i<len;i++)
  {
    for(int j=0;j<len;j++)
      cout<<a[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}*/
//Solution 1
/*int main()
{
  //Trianlge based approach
  int n,i,j,k;
  cin>>n;
  for(i=n;i>0;i--)
  {
    for(j=n;j>i;j--)
      cout<<j<<" ";
    for(j=1;j<=2*i-1;j++)
      cout<<i<<" ";
    for(j=i+1;j<=n;j++)
      cout<<j<<" ";
    cout<<endl;
  }
  for(i=1;i<n;i++)
  {
    for(j=n;j>i;j--)
      cout<<j<<" ";
    for(j=1;j<=2*i-1;j++)
      cout<<i+1<<" ";
    for(j=i+1;j<=n;j++)
      cout<<j<<" ";
    cout<<endl;
  }
  return 0;
}*/
