num = [1,2,3,4,5,5,1,3,7,8,76,7]
unique =[]
duplicate = []
for i in num:
	if i not in unique:
		unique.append(i)
	else:
		duplicate.append(i)
print(duplicate)
