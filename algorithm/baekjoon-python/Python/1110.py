import sys
from collections import deque

cycle = 1
i = deque(map(int, list(sys.stdin.readline().rstrip())))

if len(i) == 1:
	i.appendleft(0)

while(True):
	i.append((i[cycle-1] + i[cycle]) % 10)
	if i[cycle] == i[0] and i[cycle+1] == i[1]:
		break
	cycle = cycle + 1

print(cycle)
