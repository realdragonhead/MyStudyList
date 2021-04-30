x = int(input())
y = int(input())

while(True):
	if x > 0:
		if y > 0:
			print(1)
			break
		print(4)
		break
	elif x < 0:
		if y < 0:
			print(2)
			break
		print(3)
		break
