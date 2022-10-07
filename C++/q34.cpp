/*
Problem Link: https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
Monk loves Primes, whether it is number or word
Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters
Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters.
The resultant number is X.

Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

Input Format:
A single line which consists of a string

Output Format:
0 or 1 in a single line

Constraints:
1 <= string length <= 2000
*/
#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if (n <= 1)
      return 0;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}
int main()
{
  string input;
  getline(cin,input);
  int sum=0,flag=1;
  char temp;
  for(int i=0;i<input.length();i++)
  {
    if(isupper(input[i]))
    {
      temp=tolower(input[i]);
      sum-=int(temp);
    }
    else if(islower(input[i]))
    {
      temp = toupper(input[i]);
      sum+=int(temp);
    }
  }
  if(sum<0)
  {
    sum = sum * (-1);
  }
  cout<<isPrime(sum);
  return 0;
}
