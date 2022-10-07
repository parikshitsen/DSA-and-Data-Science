/*
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
        int binarySearch(int arr[], int l, int r, int x)
          {
              if (r < l)
                  return -1;
              int mid = l + (r - l) / 2;
              if (arr[mid] == x)
                  return mid;
              if (arr[mid] > x)
                  return binarySearch(arr, l, mid - 1, x);
              return binarySearch(arr, mid + 1, r, x);
          }
        int count(int arr[], int n, int x)
        {
            int ind = binarySearch(arr,0,n-1,x);
            if (ind == -1)
                  return 0;
              int count = 1;//we found one occurrence using binarySearch
              //counting the occurrences in left and right from the index returned by binary search
              int left = ind - 1;
              while (left >= 0 && arr[left] == x)
                  count++, left--;
              int right = ind + 1;
              while (right < n && arr[right] == x)
                  count++, right++;
              return count;
        }
};
int main()
{
  int t;
  cin>> t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    Solution ob;
    auto ans = ob.count(arr,n,x);
    cout<<ans<<endl;
  }
  return 0;
}
