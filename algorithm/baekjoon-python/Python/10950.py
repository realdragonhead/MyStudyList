a = int(input())

num_list = []
for i in range(0, a):
    num_list.append(input().split())
for j in range(0, a):
    target = num_list.pop()
    print(int(target[0]) + int(target[1]))
