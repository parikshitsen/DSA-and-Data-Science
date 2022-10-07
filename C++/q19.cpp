/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,temp;
  cin>>s;
  for(int i=s.size()-1;i>=0;i--)
    temp.push_back(s[i]);
  if(s==temp)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
