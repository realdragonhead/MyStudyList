a = int(input())
b = int(input())
temp = b

num_list = []
for i in range(3):
    num_list.append(temp%10)
    temp = int(temp/10)

num_list.append(b)

for j in num_list:
    print(a*j)
