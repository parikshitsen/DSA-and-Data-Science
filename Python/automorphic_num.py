print("Enter the number: ")
n=int(input())
sq=n*n #square of the given number 
co=0 #condition variable
while(n>0): #loop until n becomes 0
    if(n%10!=sq%10):
        print("Not Automorphic")
        co=1
        break                    # come out of the loop if the above condition holds true 
    #reduce n and square 
    n=n//10                      
    sq=sq//10 

if(co==0):
    print("Automorphic")