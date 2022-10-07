/*
Problem Link: https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/

Time is precious. So lets get to the crux of the problem straightaway!
Given 3 positive numbers A, B and C.
We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order.
We take the C-th number of set and print from C-th number to 0 with a step value of A or B
whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
Hint: It's recommended you implement this using continue and goto statements. ;)
Constraints:
2 <= A,B <= 1000 (A and B will not be equal)
1 <= C <= 1000

Input format:
One line containing numbers - A, B, and C
Output format:
One line containing values from C-th number to 0 with the corresponding step value.

Sample Input:
3 5 14

Sample Output:
30 15 0
*/
#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
long long int lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
  int a,b,c,max,temp,step;
  cin>>a>>b>>c;
  temp=c;
  for(int i=1; temp>0;i++)
  {
    if(i%a==0 || i%b==0)
    {
      temp--;
      max=i;
    }
  }
  if(max % lcm(a,b)==0)
    step=lcm(a,b);
  else if(max % a ==0)
    step=a;
  else
    step = b;
  while (max>=0)
  {
    cout<<max<<" ";
    max-=step;
  }
  return 0;
}
