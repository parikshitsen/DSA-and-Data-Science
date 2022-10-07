# C++ DSA QUESTIONS

- Q.1: Take three numbers input from keyboard and print their values in descending order. (Like variable a, b 
and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5)

- Q.2: Write a program to check whether the given number of three digits is palindrome or not? [Do not use 
loops]

- Q.3: WAP to calculate tax deduction as follow
    1. Upto 2,5L no tax
    2. More than 2.5 L but up to 5L 10%
    3. More than 5L but up to 10L 20%
    4. More than 10L 30%<br>
        i. If senior citizen (age >= 60) then relaxation of 5%<br>
        ii. if woman candidate (age >= 60) then relaxation of 3%

- Q.4 <b>Maximum height of the staircase</b><br>
Given an integer A representing the square blocks. The height of each square block is 1. The task is to create a staircase of max height using these blocks. The first stair would require only one block, the second stair would require two blocks and so on. Find and return the maximum height of the staircase.<br>
Sample Input<br>
arr[] = {10, 8, 9, 2, 0}
<br>Sample Output:
4
<br>Explanation:<br>
The max height of the stairs with 10 blocks is 4.
<br>Sample Input:<br>
arr[] = {16, 11, 10, 8, 4}
<br>Sample Output:<br>
5
<br>Explanation:<br>
The max height of the stairs with 16 blocks is 5.

- Q.5 <b>Square Root of Integer</b><br>
Given an Integar A. Compute and return the square root of A. If A is not a perfect square, return floor(sqrt(A)).<br>
[Instruction: DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY]
<br>Sample Input:<br> Enter number 24
<br>Sample output: <br>4<br>
<br>Sample Input: <br>Enter number 101
<br>Sample output: <br>10<br>
- Q.6 <b>Search in a row wise and column wise sorted matrix.</b><br>
Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. The designed algorithm 
should have linear time complexity. <br>
Input:<br> 
mat[4][4] = { {10, 20, 30, 40},<br>
 {15, 25, 35, 45},<br>
 {27, 29, 37, 48},<br>
 {32, 33, 39, 50}};<br>
 x = 29<br>
Output: Found at (2, 1)<br>
Input : mat[4][4] = { {10, 20, 30, 40},<br>
 {15, 25, 35, 45},<br>
 {27, 29, 37, 48},<br>
 {32, 33, 39, 50}};<br>
 x = 100<br>
Output : Element not found<br>

- Q.7 Write a program to find largest number in an array that is not a perfect cube such that complexity must be of the order O(n).<br>
Input: arr[] = {16, 8, 25, 2, 3, 10} <br>
Output: 25<br>
25 is the largest number that is not a perfect cube.<br> 
Input: arr[] = {36, 64, 10, 16, 29, 25}<br>
Output: 36<br>

- Q.8 Write a program to find Number of pairs in an array with the sum greater than 0. Try to keep complexity below O(n2)<br><br>
Input: arr[] = { 3, -2, 1 }<br>
Output: 2<br>
Explanation: There are two pairs of elements in the array whose sum is positive. They are:<br>
{3, -2} = 1
{3, 1} = 4 <br><br>
Input: arr[] = { -1, -1, -1, 0 }<br>
Output: 0<br>
Explanation: There are no pairs of elements in the array whose sum is positive.

- Q.9 Given an integer N, the task is to count the number of ways so that N can be written as the sum of a prime number and twice of a square, i.e. N = 2*A2 + P, where P can be any prime number and A is any positive integer.<br>
Input: N = 9<br>
Output: 1<br>
Explanation: 9 can be represented as sum of prime number and twice a square in only one way <br>
N = 9 = 7 + 2*(12)
Input: N = 15<br>
Output: 2<br>
Explanation: 15 can be represented as sum of prime number and twice a square in two ways <br>
N = 15 = 7 + 2 * (22)<br>
N = 15 = 13 + 2 * (12)<br>

- Q.10 Given a large integer as a string str, the task is find the number of matchsticks required to represent it.<br>
Input: str = “56”<br>
Output: 11<br>
Explanation: 5 sticks are required to represent 5 and 6 sticks are required to represent 6.<br>

- Q.11 Write a program to find a raised to the power of b [Using recursion].

- Q.12 Write a program to find GCD of any array having more than two elements

- Q.13 Given rectangle of length l and b. Print area of reactangle<br>
        Constraints:<br>
        1<= l <=10^9<br>
        1<= b <=10^9<br>
    Input Format:<br>
            2 space separated integers l and b
    Output Format:<br>
            Single number which is area of reactangle

    Sample Input:<br>
            3 4
    Sample Output:<br>
            12

- Q.14 Priniting Patterns Using Loops<br>
Input: 4<br>
Output:<br>
 4 4 4 4 4 4 4<br>
 4 3 3 3 3 3 4<br>
 4 3 2 2 2 3 4<br>
 4 3 2 1 2 3 4<br>
 4 3 2 2 2 3 4<br>
 4 3 3 3 3 3 4<br>
 4 4 4 4 4 4 4<br>

- Q.15 Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick. Each part must have some positive integer length and the sum of these lengths will obviously be n.<br>
Pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that it's possible to form a rectangle using these parts, but is impossible to form a square.<br>
Your task is to help Pasha and count the number of such ways.<br>
Two ways to cut the stick are considered distinct if there exists some integer x, such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.<br>
Input<br>
The first line of the input contains a positive integer n (1 ≤ n ≤ 2·109) — the length of Pasha's stick.<br>
Output<br>
The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length so that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.
<br>
Example:<br>
input 6<br>
output 1<br>
input 20<br>
output 4

- Q.16 You are given an integer sequence 1,2,…,n. You have to divide it into two sets A and B in such a way that each element belongs to exactly one set and |sum(A)−sum(B)| is minimum possible.<br>
The value |x| is the absolute value of x and sum(S) is the sum of elements of the set S.<br>
Input<br>
The first line of the input contains one integer n (1≤n≤2⋅109).
<br>Output<br>
Print one integer — the minimum possible value of |sum(A)−sum(B)| if you divide the initial sequence 1,2,…,n into two sets A and B.

- Q.17 Input Format<br>
You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').<br>
Output Format<br>
In the first line print two space-separated integers, representing the length of  and  respectively.<br>
In the second line print the string produced by concatenating and ().
<br>In the third line print two strings separated by a space, and .  and  are the same as  and , respectively, except that their first characters are swapped.
<br>
Sample Input:<br>
  abcd<br>
  ef<br>
Sample Output:<br>
  4 2<br>
  abcdef<br>
  ebcd af<br>
Explanation:<br>
a =  "abcd"<br>
b =  "ef"<br>
|a| = 4<br>
|b| = 2<br>
a+b = "abcdef"<br>
a' = "ebcd"<br>
b' =  "af"

- Q.18 <a href= " https://practice.geeksforgeeks.org/problems/reverse-a-string/1">Given a string passed in a function return the reversed string</a>

- Q.19 <a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/">You have been given a String S. You need to find and print whether this string is a palindrome or not. <br>If yes, print "YES" (without quotes), else print "NO" (without quotes).<br>
Input Format<br>
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.<br>
Output Format
Print the required answer on a single line.</a>

- Q.20 Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).<br>
Example 1:<br>
Input:<br>
string1 = "computer"<br>
string2 = "cat"<br>
Output: "ompuer"<br>
Explanation: After removing characters(c, a, t) from string1 we get "ompuer".<br>
Input:<br>
string1 = "occurrence"<br>
string2 = "car"<br>
Output: "ouene"<br>
Explanation: After removing characters (c, a, r) from string1 we get "ouene".
- Q.21 <a href="https://www.codechef.com/problems/STONES">
Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories. She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not.<br>
Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not. Given her description, your task is to count the number of jewel stones.<br>
More formally, you're given a string J composed of latin characters where each character is a jewel.<br>
You're also given a string S composed of latin characters where each character is a mined stone.<br>
You have to find out how many characters of S are in J as well.<br>
Input<br>
First line contains an integer T denoting the number of test cases.<br>
Then follow T test cases. Each test case consists of two lines,
each of which contains a string composed of English lower case and upper characters.<br>
First of these is the jewel string J and the second one is stone string S.<br>
You can assume that 1 <= T <= 100, 1 <= |J|, |S| <= 100<br>
Output<br>
Output for each test case, a single integer, the number of jewels mined.<br>
Sample 1:<br>
Input<br>
4<br>
abc<br>
abcdef<br>
aA<br>
abAZ<br>
aaa<br>
a<br>
what<br>
none<br>
Output<br>
3<br>
2<br>
1<br>
0<br>
</a>

- Q.22 Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.<br>
Input:<br>
N = 7, X = 2<br>
Arr[] = {1, 1, 2, 2, 2, 2, 3}<br>
Output: 4<br>
Explanation: 2 occurs 4 times in the given array.

- Q.23 You are conducting a contest at your college. This contest consists of two problems and participants. You know the problem that a candidate will solve during the contest.<br>
You provide a balloon to a participant after he or she solves a problem. 
There are only green and purple-colored balloons available in a market. 
Each problem must have a balloon associated with it as a prize for solving that specific problem. <br>
You can distribute balloons to each participant by performing the following operation:<br>
    - Use green-colored balloons for the first problem and purple-colored balloons for the second problem<br>
    - Use purple-colored balloons for the first problem and green-colored balloons for the second problem<br>

    You are given the cost of each balloon and problems that each participant solve. <br>
    Your task is to print the minimum price that you have to pay while purchasing balloons.<br>
    Input format:<br>
    First line: T that denotes the number of test cases (1<=T<=10)
    <br>For each test case:<br>
    First line: Cost of green and purple-colored balloons<br> 
    Second line: n that denotes the number of participants (1<=n<=10)

    Next n lines: Contain the status of users. 
    For example, if the value of the jth integer in the ith row is 0, 
    then it depicts that the ith participant has not solved the jth problem. <br>
    Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith participant has solved the jth problem.

    Output format<br>
    For each test case, print the minimum cost that you have to pay to purchase balloons.

    Sample Input<br>
    2<br>
    9 6<br>
    10<br>
    1 1<br>
    1 1<br>
    0 1<br>
    0 0<br>
    0 1<br>
    0 0<br>
    0 1<br>
    0 1<br>
    1 1<br>
    0 0<br>
    1 9<br>
    10<br>
    0 1<br>
    0 0<br>
    0 0<br>
    0 1<br>
    1 0<br>
    0 1<br>
    0 1<br>
    0 0<br>
    0 1<br>
    0 0<br>
    Sample Output<br>
    69<br>
    14

- Q.24 Micro purchased an array A having N integer values. After playing it for a while, he got bored of it and decided to update value of its element. In one second he can increase value of each array element by 1. 
He wants each array element's value to become greater than or equal to K. <br>
Please help Micro to find out the minimum amount of time it will take, for him to do so.<br>
Input:<br>
First line consists of a single integer, T, denoting the number of test cases.<br>
First line of each test case consists of two space separated integers denoting N and K.<br>
Second line of each test case consists of N space separated integers denoting the array A.<br>
Output:<br>
For each test case, print the minimum time in which all array elements will become greater than or equal to K.<br> 
Print a new line after each test case. <br>
Constraints:<br>
1<=T<=5<br>
1<=N<=10^5<br>
1<=A[i],K<=10^6<br>
Sample Input<br>
2<br>
3 4<br>
1 2 5<br>
3 2<br>
2 5 5<br>
Sample Output<br>
3<br>
0<br>

- Q.25 <b>Roy likes Symmetric Logos.</b><br>
How to check whether a logo is symmetric? Align the center of logo with the origin of Cartesian plane. Now if the colored pixels of the logo are symmetric about both X-axis and Y-axis, then the logo is symmetric.<br>
You are given a binary matrix of size N x N which represents the pixels of a logo.<br>
1 indicates that the pixel is colored and 0 indicates no color.
<br>
For instance: Take a 5x5 matrix as follows:
 0 1 1 1 0<br>
 0 1 0 1 0<br>
 1 0 0 0 1<br>
 0 1 0 1 0<br>
 0 1 1 1 0<br>
Observe that it is symmetric about both X-axis and Y-axis. <br>
Your task is to output YES if the logo is symmetric else output NO.<br>
Input:<br>
First line contains T - number of test cases.<br>
T test cases follow.<br>
First line of each test case contains the N - size of matrix.<br>
Next N lines contains binary strings of length N.<br>
Output:<br>
Print YES or NO in a new line for each test case<br>
Constraints:<br>
1 ≤ T ≤ 10<br>
2 ≤ N ≤ 32<br>
Note: There will always be atleast 1 colored pixel in input data.

- Q.26 Sharmeen loves array very much. Many days ago she wrote an array (of n elements and the index of this array is 1 based ) in her notebook,
but unfortunately she lost the notebook.<br>She want to restore the array. The only clue she know that is if in any position(i) of the array (1<= i < n), the element in this position is greater than, equal or less than the next position(i+1) element.
<br>Can you help her to restore the array?
Input<br>
In the first line given an integer t ( 1 <= t <= 100 ), which is the number of test cases.<br>
For each test case<br>
In the first line there will be given a positive integer n ( 1 <= n <= 10^5 ) which is the size of the lost array.<br>
In the next line there will be n - 1 intergers Xi( 0 <= Xi <= 2 ).<br>
      If, Xi = 0 , then ith  element is equal to (i+1)th element of the lost array.<br>
      If, Xi = 1 , then ith  element is less than (i+1)th element of the lost array.<br>
      If, Xi = 2 , then ith  element is greater than (i+1)th element of the lost array.<br>
Output<br>
For each test case you have to output the lost array in one line. <br>If multiple solution exist then you have to print the lexicographically smallest one. <br>Elements of the lost array must be greater than zero( 0 ).
For better understanding see the sample input output.<br>
Input:<br>
1<br>
5<br>
1 2 0 1<br>
Output:<br>
1 2 1 1 2<br>

<a href="https://www.spoj.com/problems/MOZSATLA/">Note: SPOJ is a broken site in many ways, the code given below when implemented with python gets accepted but in C++ it fails and no proper diagnosis of error is there
If you manually try any test case it passes but still wont get accepted.</a><br>
for reference refer to q26.cpp file in the C++ folder

- Q.27 <a href="https://www.codechef.com/LRNDSA01/problems/CARVANS">
Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi.<br>
He noticed that one segment of the circuit was a long straight road.
It was impossible for a car to overtake other cars on this segment.
Therefore, a car had to lower down its speed if there was a slower car in front of it.<br>While watching the race, Chef started to wonder how many cars were moving at their maximum speed.<br>
Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit.<br>
Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed.
It still moves at the fastest possible speed while avoiding any collisions.<br>
For the purpose of this problem, you can assume that the straight segment is infinitely long.<br>
Count the number of cars which were moving at their maximum speed on the straight segment.<br>
Input<br>
The first line of the input contains a single integer T denoting the number of test cases to follow.<br>
Description of each test case contains 2 lines. <br>The first of these lines contain a single integer N, the number of cars.<br>
The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.<br>
Output<br>
For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.<br>
Constraints<br>
1 ≤ T ≤ 100<br>
1 ≤ N ≤ 10,000<br>
All speeds are distinct positive integers that fit in a 32 bit signed integer.<br>
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size.<br>
WARNING! The input files are very large. Use faster I/O.<br>
Example:<br>
  Input:<br>
    3<br>
    1<br>
    10<br>
    3<br>
    8 3 6<br>
    5<br>
    4 5 1 2 3<br>
  Output:<br>
    1<br>
    2<br>
    2<br>
</a>

- Q.28 <a href="https://www.hackerearth.com/problem/algorithm/jiyas-sequence/">
Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.<br>
Given the number of  test case t.<br>
The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.<br>
For each given test case tell whether the given sequence will be liked by Jiya.<br>
INPUT FORMAT-<br>
First line constains t number of test cases.<br>
Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.<br>
OUTPUT FORMAT -<br>
Print "YES" or "NO",whether Jiya likes the sequence or not.<br>
CONSTRAINTS-<br>
1≤t≤100<br>
1≤n≤15<br>
1≤Ai≤10, for all i
</a>

- Q.29 <a href="https://www.hackerearth.com/problem/algorithm/city-tour/">
A vertex is considered as a point with both its coordinates as integers.
You are initially at the origin of a 2D surface. You can move by the following rules:<br>
One move is counted as a vertex to an adjacent vertex. You cannot jump, and can only move to an adjacent vertex.<br>
For example, if you are at point A(x,y) , then you may move to any of the points  B, C, D, E (defined below),<br>
A(x,y)  to  B(x,y-1) or C(x,y+1) or D(x+1,y) or E(x-1,y)<br>
Distance from origin should increase with each move.<br>
Distance from origin for a vertices (a,b) is:<br>
Dis(a,b) = abs(a) + abs(b) where abs() is absolute value<br>
Both rules must be satisfied for every move<br>
For a given number of steps (N), calculate the count of possible final position vertices you may end in if you initially started from the origin.<br>
Constraints :<br>
1≤t≤50<br>
1≤N≤10^12<br>
Input Format:<br>
First Line: Number of test cases (t)<br>
Next "t" Line: Integer N representing the number of steps<br>
Output Format:<br>
  For each test case output: Count of possible final position vertices starting from origin.<br>
Sample Input:<br>
2<br>
3<br>
1<br>
Sample Output: <br>
12<br>
4<br>
</a>

- Q.30 <a href="https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/">
Time is precious. So lets get to the crux of the problem straightaway!
Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order.<br>
We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B).<br>
Constraints:<br>
2 <= A,B <= 1000 (A and B will not be equal)<br>
1 <= C <= 1000<br>
Input format:<br>
One line containing numbers - A, B, and C<br>
Output format:<br>
One line containing values from C-th number to 0 with the corresponding step value.<br>
Sample Input:<br>
3 5 14<br>
Sample Output:<br>
30 15 0
</a>

- Q.31 <a href="https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/">
This year Santa wants to make a Christmas tree. But this time he wants to decorate it with numbers as in the Pascal’s triangle.<br>
But Santa is very busy in packing the gifts. Now, you being Santa’s friend help in making the tree.<br>
Input:<br>
In the first line, you will be given ”t” no. of test cases.<br>
For each test case, you will be given a whole number “N”.<br>
Output:<br>
For each value N, Print the first N lines in Christmas tree.<br>
Constraints:<br>
1≤T≤100<br>
1 ≤ N ≤ 40<br>
Sample Input:<br>
2<br>
3<br>
5<br>
Sample Output:<br>
1<br>
1 1<br>
1 2 1<br>
1<br>
1 1<br>
1 2 1<br>
1 3 3 1<br>
1 4 6 4 1<br>
</a>

- Q.32 <a href="https://www.hackerearth.com/problem/algorithm/gpl/">
It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so schemy, he locked his room with a secret number and given his friends a Binary string of secret number.<br>
His friends have no knowledge about binary strings. Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.<br>
Binary String is a string with only '0' and '1'  as it's characters.<br>
Examples : <br>"000101", "10101", "1", "0", "01" are Binary Strings.<br>
    "Ab3024", "123", "1A", "6", "AA" are not Binary Strings<br>
Input Format:<br>
  First Line : Integer T that denotes number of test cases(1<=T<=10^4).<br>
  For each test case:  Integer N for size of Binary String (1<=N<=60) and Binary String S.<br>
Output Format:<br>
  For each Test case, print Single Line integer containing the secret number.<br>
  Note: Secret number will always be greater than or equal to 0.<br>
Sample Input:<br>
3<br>
4<br>
0001<br>
2<br>
10<br>
4<br>
1010<br>
Sample Output:<br>
1<br>
2<br>
10<br>
</a>

- Q.33 <a href="https://www.hackerearth.com/problem/algorithm/capitalbaazi/">
Cheems doesn't like extra content so coming straight to the point.
Given the input of one line, having words separated by a single space,
print each word of the input, each in a new line.<br>
Also, change all the alphabets to uppercase along with doing this.
Input:-<br>
Given in one line, all letters are lowercase only, separated by a single space.<br>
Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.<br>
Length of input <= 10^4<br>
Output:-<br>
Output each word with characters in uppercase.<br>
Note:- A testcase contains only one word as the input to get partial marks.<br>
Sample Input :<br>
subscribe to the luv channel<br>
Sample Output:<br>
SUBSCRIBE<br>
TO<br>
THE<br>
LUV<br>
CHANNEL<br>
</a>

- Q.34 <a href="https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/">
Monk loves Primes, whether it is number or word<br>
Rules to convert a string to a number:<br>
1. Convert the UpperCase letters to LowerCase letters<br>
2. Convert the LowerCase letters to UpperCase letters<br>
Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters.<br>
The resultant number is X.<br>
Note: If X is negative take absolute value of it.<br>
Print 1 if X is a prime number and 0 if not<br>
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)<br>
Input Format:<br>
A single line which consists of a string<br>
Output Format:<br>
0 or 1 in a single line<br>
Constraints:<br>
1 <= string length <= 2000</a>