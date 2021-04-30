i = [*open(0)]

l = list(map(int, i[1].split()[:int(i[0])]))

print(min(l))
print(max(l))
