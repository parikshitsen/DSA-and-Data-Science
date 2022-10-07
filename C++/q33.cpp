/*
Problem Link: https://www.hackerearth.com/problem/algorithm/capitalbaazi/
Cheems doesn't like extra content so coming straight to the point.
Given the input of one line, having words separated by a single space,
print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.

Input:-
Given in one line, all letters are lowercase only, separated by a single space.
Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.
Length of input   <= 10^4

Output:-
Output each word with characters in uppercase.

Note:- A testcase contains only one word as the input to get partial marks.

Sample Input :
subscribe to the luv channel

Sample Output:
SUBSCRIBE
TO
THE
LUV
CHANNEL
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string input;
  getline(cin,input);
  string temp="";
  for(int i=0;i<input.length();i++)
  {
    if(input[i]==' ' || i==input.length()-1)
    {
      temp.push_back(toupper(input[i]));
      cout<<temp<<endl;
      temp="";
    }
    else
    {
      temp.push_back(toupper(input[i]));
    }
  }
  return 0;
}
