import sys

c = int(sys.stdin.readline().rstrip())

add_list = []
for i in range(0, c):
	add_list.append(sys.stdin.readline().rstrip().split())
	add_list[i] = int(add_list[i][0]) + int(add_list[i][1])

for j in range(0, c):
	print(add_list[j])
