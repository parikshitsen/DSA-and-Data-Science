/*Q.1 Maximum height of the staircase.Given an integer A representing the square blocks. The height of each square block is   
    1. The task is to create a staircase of max height using these blocks. The first stair would require only one block, 
    the second stair would require two blocks and so on. Find and return the maximum height of the staircase.
    Sample Input = {10, 8, 9, 2, 0}
    Sample Output: 4
    Explanation:
        The max height of the stairs with 10 blocks is 4.
    Sample Input: arr[] = {16, 11, 10, 8, 4}
    Sample Output: 5
    Explanation:
        The max height of the stairs with 16 blocks is 5.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << "Max number from array is:\t" << maxNum << "\n";

    int i = 1, noOfStair = 0, blockUsed = 0;
    while (blockUsed + i <= maxNum)
    {
        noOfStair++;
        blockUsed += i;
        i++;
    }
    cout << "Max no of stairs from the given array is: " << noOfStair;

    return 0;
}