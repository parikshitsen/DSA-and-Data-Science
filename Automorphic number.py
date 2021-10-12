num=input("Enter a number : ")
l=len(num)
num=int(num)
n=10**l
N=num**2
if N%n==num:
	print("The number is Automorphic Number")
else:
	print("The number is not Automorphic Number")