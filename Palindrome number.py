num=int(input("Enter a no. "))
Sum=0
rev=0
n=num
while(num>0):
	rem=num%10
	rev=(rev*10)+rem
	num=num//10
if rev==n:
	print(n,"is a palindrome")
else:
	print(n,"is not a palindrome")