n = int(input())
flag = 0


for i in range(2, sqrt(n)):
	if n%i == 0:
		flag = 1
		break

if(flag == 1):
	print("Not Prime")
else:	print("Prime")	
