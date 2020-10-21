nterms = int(input("Enter the no. of terms : "))
n1, n2 = 0, 1
count= 0 
if nterms < 0:
	print("Please enter the Positive no.")
elif nterms == 0:
	print("Fibonacci Sequence : ",n1)
else:
	print("Fibonacci Sequence : ")
	while count<nterms:
		print(n1)
		nth = n1 + n2
		n1 = n2
		n2 = nth
		count+=1