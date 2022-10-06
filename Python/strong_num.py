def factorial(n):
	Sum=1
	for i in range(1,n+1):
		Sum=Sum*i
	return Sum

num=int(input("Enter a no. "))
Sum=0
n=num
while(num>0):
	rem=num%10
	Sum=Sum+factorial(rem)
	num=num//10
if n==Sum:
	print("Enter number",n,"Strong no.")
else:
	print("Enter number is",n,"not Strong no.")