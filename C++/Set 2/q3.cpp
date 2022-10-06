/*Q3. Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print
“Not Found”. In the given matrix, every row and column is sorted in increasing order. The designed algorithm
should have linear time complexity.
Input:mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
        x = 29
Output: Found at (2, 1)

Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
        x = 100
Output : Element not found */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of 2-D array\n";
    cin >> n;
    cout << "Entered size is \t" << n << "\n";

    int arr[n][n], x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Entered array is:\n";
    cout << "[\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t[ ";

        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "\n]\n";

    cout << "Please enter the number to be searched\n";
    cin >> x;
    cout << "You have entered:\t" << x << endl;

    if (x < arr[0][0] || x > arr[n - 1][n - 1])
    {
        cout << x << " not found\n";
    }
    else
    {
        int i = 0, j = n - 1;
        unsigned char isFound = 0;
        while (i < n && j >= 0)
        {
            if (arr[i][j] > x)
            {
                j--;
            }
            else if (arr[i][j] < x)
            {
                i++;
            }
            else
            {
                isFound = isFound | 1;
                break;
            }
        }
        if (isFound)
        {
            cout << x << "is found at:\t" << i << "," << j << endl;
        }
        else
        {
            cout << x << " not found\n";
        }
    }

    return 0;
}