/*Given an integer N, the task is to count the number of ways so that N can be written as the sum of a prime number and twice of 
a square, i.e. N = 2*A2 + P, where P can be any prime number and A is any positive integer.
Input: N = 9
Output: 1
Explanation:
9 can be represented as sum of prime number and twice a square in only one way –
N = 9 = 7 + 2*(1^2)

Input: N = 15
Output: 2
Explanation:15 can be represented as sum of prime number and twice a square in two ways –
N = 15 = 7 + 2*(2^2)
N = 15 = 13 + 2*(1^2)
Ref: https://www.geeksforgeeks.org/count-of-ways-to-represent-n-as-sum-of-a-prime-number-and-twice-of-a-square/
Ref: https://www.geeksforgeeks.org/c-program-for-sieve-of-eratosthenes/
Ref: https://www.geeksforgeeks.org/sieve-of-eratosthenes/
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> AllPrime; 

void findAllPrime(int n)
{
	int size = sqrt(n);
	bool prime[n+1];
	
	memset(prime,true,sizeof(prime)); // memset if a STL function that is used to initialize data types 
	//Ref: https://www.geeksforgeeks.org/memset-in-cpp/
	
	// finding the prime numbers upto n
	for(int i=2; i<=n;i++)
	{
		if(prime[i]==true)
			for(int j=i*2;j<=n;j+=i)
				prime[j]=false;
	}
	// Storing the prime numbers which were found using previous loop in the vector AllPrime
	for(int i=2;i<=n;i++)
		if(prime[i])
			AllPrime.push_back(i);
}

int noOfWays(int n)
{
	int count =0;	
	for(int i=0;AllPrime[i]<=n;i++) // For every prime number 
	{
		for(int j=1;((j*j<=n) && (AllPrime[i]+j<=n));j++)
		{
			if(n==AllPrime[i]+(2*(pow(j,2))))
				count++;
		}
	}
	return count;
}
int main()
{
	int n,ways=0;
	cout<<"Enter the number to be checked: ";
	cin>>n;
	findAllPrime(n);
	ways=noOfWays(n);
	cout<<"The number of ways are: "<<ways;
	return 0;
}