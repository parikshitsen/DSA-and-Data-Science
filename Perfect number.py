num=int(input("Enter a no. "))
Sum=0
n=num
for i in range(1,num):
	if num%i==0:
		Sum+=i
if n==Sum:
	print("Enter number",n,"perfect no.")
else:
	print("Enter number is",n,"not perfect no.")