arr = [9,3,5,1,80,3,6,7,45]
large = arr[0]
small = arr[0]
for i in arr:
	if small>i:
		small=i
	if large<i:
		large=i
print("small : ",small)
print("large : ",large) 