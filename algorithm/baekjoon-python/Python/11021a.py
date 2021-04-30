import sys

c = int(sys.stdin.readline().rstrip())

alist = []
for i in range(0, c):
	alist.append(sys.stdin.readline().rstrip().split())
	alist[i] = int(alist[i][0]) + int(alist[i][1])

for j in range(0, c):
	print('Case #%d:'%(j+1), alist[j])

print(alist)
