import sys

c = int(sys.stdin.readline())

for i in range(c):
	print(' '*(c-i-1)+'*'*(i+1))
