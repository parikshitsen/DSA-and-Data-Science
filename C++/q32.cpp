/*
Problem Link: https://www.hackerearth.com/problem/algorithm/gpl/
It's Binod's Birthday and all his friends want to have a great GPL for him.
But Binod being so schemy, he locked his room with a secret number and given his friends a Binary string of secret number.
His friends have no knowledge about binary strings.
Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.
Binary String is a string with only '0' and '1'  as it's characters.
Examples : "000101", "10101", "1", "0", "01" are Binary Strings.
    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings

Input Format:
  First Line : Integer T that denotes number of test cases(1<=T<=10^4).
  For each test case:  Integer N for size of Binary String (1<=N<=60) and Binary String S.

Output Format:
  For each Test case, print Single Line integer containing the secret number.
  Note: Secret number will always be greater than or equal to 0.

Sample Input:
3
4
0001
2
10
4
1010

Sample Output:
1
2
10
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
    string code;
    cin>>n;
    cin>>code;
    long long int pass=0;
    long long int power = 1;
    for(int i=n-1;i>=0;i--)
    {
      if(code[i]=='1')
      {
        pass = pass + power;
      }
      power = power *2;
    }
    cout<<pass<<endl;
  }
  return 0;
}
