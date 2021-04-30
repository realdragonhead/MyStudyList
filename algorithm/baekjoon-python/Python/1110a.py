import sys
from collections import deque

cycle = 1
i = deque(map(int, list(sys.stdin.readline().rstrip())))
tmp = 0

if len(i) == 1:
    i.insert(0, 0)

while(True):
    tmp = i[cycle-1] + i[cycle]

    if tmp >= 10:
        tmp = tmp % 10

    i.append(tmp)

    if i[cycle] == i[0] and i[cycle+1] == i[1]:
        break
    cycle = cycle + 1

print(cycle)
