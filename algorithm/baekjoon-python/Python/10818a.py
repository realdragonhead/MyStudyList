i = [*open(0)]

l = list(map(int, i[1].split()[:int(i[0])]))

mx, mn = l[0],  l[0]

# print(min(l))
# print(max(l))

for i in l:
	if mx < i:
		mx = i
	if mn > i:
		mn = i
print(mn, mx)
