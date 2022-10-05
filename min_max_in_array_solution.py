arr = [99,7,8,6,1,10,100 , 88]
max_ele = arr[0]
min_ele = arr[0]
for i in arr:
    if max_ele < i:
        max_ele = i
    if min_ele > i:
        min_ele = i
print(min_ele , max_ele)
