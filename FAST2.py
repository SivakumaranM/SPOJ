import sys
a=[0]*501
a[0]=1
b=1298074214633706835075030044377087
for i in range(1,501):
    a[i]=(a[i-1]+2**i)%b
for i in range(input()):
	sys.stdout.write(str(a[input()])+"\n")