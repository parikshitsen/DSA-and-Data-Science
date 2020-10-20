x = input("Enter the word : ")
s1 = 0
s2 = 0
t = len(x)
for q in range(t):
    if x[q] in  "aeiou":
        s1 = s1+ (t-q)
    elif x[q] not in  "aeiou":
        s2 = s2 + (t-q)
if s1 > s2:
    print('S1 Win with {} points'.format(s1))
elif s1 < s2:
    print('S2 Win with {} points'.format(s2))
else:
    print("Its  Draw")