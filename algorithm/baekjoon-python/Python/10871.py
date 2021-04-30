import sys

n = list(map(int, sys.stdin.readline().rstrip().split()))
alist = list(map(int, sys.stdin.readline().rstrip().split()))

for j in range(n[0]):
	if (alist[j] < n[1]): print(alist[j])
