x=0
numbers=[]
while True :
	value=raw_input("Enter Number : \t")
	if value.isdigit()==True:
		i=int(value)
		numbers.append(i)
		x=x+i
	elif value == "" :
		break
print'...................................'
print'sum of values :' ,x
print'...................................'
print'number you have entered :' ,numbers

