import sys

cycle = 1
i = list(map(int, list(sys.stdin.readline().rstrip())))
tmp = 0

if len(i) == 1:
    i.insert(0, 0)

while(True):
    tmp = i[cycle-1] + i[cycle]

    i.append(tmp%10)

    if i[cycle] == i[0] and i[cycle+1] == i[1]:
        break
    cycle = cycle + 1

print(cycle)
