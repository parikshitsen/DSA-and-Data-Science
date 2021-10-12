num=int(input("Enter a no. "))
Sum=0
n=num
while(num>0):
	rem=num%10
	Sum+=rem*rem*rem
	num=num//10
if n==Sum:
	print(n,"is armstrong number")
else:
	print(n,"is not a armstrong number")
