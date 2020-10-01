#!/usr/bin/env python3

def impair(arr):

	new_arr = [ ]
	count = 0
	
	for i in arr:
		count = 0
		
		for j in i:

			if '1' in j:
				count = count + 1
		if (count % 2 > 0):
			new_arr.append("0"+i)
		else:
			new_arr.append("1"+i)
	return new_arr


number = int(input("Enter an integer : "))

num = "{0:b}".format(number)
print ("Binary of Number = ", num)

array=[num]
print("Result after even parity : ", impair(array))
