arr = [-1,6,9,10,4,5,0]
s =9
for i in range(0, len(arr) ):
    for j in range(i + 1, len(arr) ):
        if (arr[i] + arr[j] == s):
            print("(", arr[i],
                  ", ", arr[j],
                  ")", sep = "")
