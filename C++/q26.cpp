/*
Sharmeen loves array very much. Many days ago she wrote an array ( of n elements and the index of this array is 1 based ) in her notebook,
but unfortunately she lost the notebook. She want to restore the array. The only clue she know that is if in any position(i) of the array (1<= i < n ),
the element in this position is greater than, equal or less than the next position(i+1) element.
Can you help her to restore the array?

Input
In the first line given an integer t ( 1 <= t <= 100 ), which is the number of test cases.
For each test case,
In the first line there will be given a positive integer n ( 1 <= n <= 10^5 ) which is the size of the lost array.
In the next line there will be n - 1 intergers Xi( 0 <= Xi <= 2 ).
      If, Xi = 0 , then ith  element is equal to (i+1)th element of the lost array.
      If, Xi = 1 , then ith  element is less than (i+1)th element of the lost array.
      If, Xi = 2 , then ith  element is greater than (i+1)th element of the lost array.

Output
For each test case you have to output the lost array in one line. If multiple solution exist then you have to print the lexicographically smallest one. Elements of the lost array must be greater than zero( 0 ).
For better understanding see the sample input output.
Input:
1
5
1 2 0 1

Output:
1 2 1 1 2

Problem Link : https://www.spoj.com/problems/MOZSATLA/
Note: SPOJ is a broken site in many ways, the code given below when implemented with python gets accepted but in C++ it fails and no proper diagnosis of error is there
If you manually try any test case it passes but still wont get accepted.

Python Code:
T = int(input())

while T > 0:
    n = int(input())
    X = input().split()
    A = [1]*n

    for i in range(n - 2, -1, -1):
        if X[i] == '0':
            A[i] = A[i + 1]
        elif X[i] == '1':
            A[i] = 1
            if A[i + 1] == 1:
                l = i + 1
                A[l] += 1
                while l < n - 1:
                    if X[l] == '0':
                        A[l + 1] += 1
                    elif X[l] == '1' and A[l + 1] <= A[l]:
                        A[l + 1] += 1
                    else:
                        break
                    l += 1
        else:
            A[i] = A[i + 1] + 1

    print(' '.join(map(str, A)))
    T -= 1
*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    // Input
    int n;
    cin>>n;
    int arr[n];
    int r[n];
    for(int i=0; i<n-1; i++)
    {
      cin>>arr[i];
      r[i]=1;
    }
    r[n-1]=1;
    for(int i=n-2; i>=0;i--)
    {
      if(arr[i]==0)
        r[i]=r[i+1];

      else if( arr[i] == 1)
      {
        r[i]=1;
        if (r[i+1]==1)
        {
            int temp;
            temp = i+1;
            r[temp]+=1;
            while (temp<n-1)
            {
              if (r[temp]==0)
                r[temp + 1] +=1;
              else if (arr[temp] == 1 && r[temp+1]<=r[temp])
                r[temp+1] +=1;
              else
                break;
              temp+=1;
            }
        }
      }

      else
        r[i]=r[i+1]+1;
    }

    // Output
    for(int i=0;i<n;i++)
      cout<<r[i]<<" ";
  }
  return 0;
}
