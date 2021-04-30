import sys

c = int(sys.stdin.readline().rstrip())

alist = []

for i in range(c):
	alist.append(sys.stdin.readline().split())

for j in range(c):
	print('Case #%d: %s + %s = %d'%(j+1, alist[j][0], alist[j][1], int(alist[j][0]) + int(alist[j][1])))
