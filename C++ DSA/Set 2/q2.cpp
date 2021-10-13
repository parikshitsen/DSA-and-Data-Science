/*Q2. Given an Integar A, Compute and return the square root of A. If A is not a perfect  square, return floor(sqrt(A)).
    [Instruction: DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY]
    Sample Input: Enter number 24
    Sample output: 4
    Sample Input: Enter number 101
    Sample output: 10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number\n";
    cin >> num;
    cout << "Entered number is \t" << num << "\n";

    int sqrt;
    sqrt = pow(num, 0.5);
    cout << "The sqrt of "<< "num"<< " is:\t" << sqrt << "\n";
    return 0;
}