import sys

res = []
while(True):
	a = sum(list(map(int, sys.stdin.readline().rstrip().split())))
	if a == 0:
		break
	res.append(a)

for j in res:
	print(j)
