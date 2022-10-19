def large_small(leng,arr):
    large = arr[0]
    small = arr[0]
    for i in range(leng):
        if large<arr[i]:
            large = arr[i]
        if small>arr[i]:
            small = arr[i]
    return large,small
arr = []
leng = int(input('enter the number of elements : '))
for i in range(leng):
    elem = int(input())
    arr.append(elem)
print("the largest and smalles elements of the unsorted array are : ", large_small(leng,arr))
