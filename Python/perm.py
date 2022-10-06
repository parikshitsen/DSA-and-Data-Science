def partition(userlist):
	l=[]
	if len(userlist)==1:
		return [userlist]
	for i in range(len(userlist)):
	 	m=userlist[i]
	 	remuserlist=userlist[:i]+userlist[i+1:]
	 	n=partition(remuserlist)
	 	for p in n:
	 		l.append([m]+p)
	return l
data=[1,2,3]
p=partition(data)
for i in range(len(p)):
	print(p[i])