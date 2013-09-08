def f(x):
	a=x/100
	b=x/10%10
	c=x%10
	if a*a*a+b*b*b+c*c*c==x :
		return 1
	else:
		return 0
for i in range(100,999):
	if f(i)==1:
		print i
