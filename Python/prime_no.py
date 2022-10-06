num=int(input())
flag=0
for j in range(2, num):
    if num % j == 0:
        break
    else:
        flag=1
if flag==1:
    print("It is a prime number")
else:
    print("It is not a prime number")