s = input("Type String : ")

def freq(s):

  k=[]
  k[:]=s
  
  f = []
  k.sort()
  j=0
  i=0
  

  while i<len(k):
    freq = 0
    while j<len(k):

      if k[i] == k[j]:
        freq = freq+1
        j=j+1
      else:
        break

    f.append((k[i],freq))
    i=j
   

  return f

result = freq(s)

for i in result:
  print(f'{(i[0]).upper()} occurs {i[1]} times')





    



      

 




