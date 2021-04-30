a, b = input().split()
a = int(a)
b = int(b)
if b < 45:
    temp = 45 - b
else:
    temp = 0
    b = b - 45

if temp != 0:
    if a == 0:
        a = 23
    else:
        a = a - 1
    b = 60 - temp
print(a, b)
