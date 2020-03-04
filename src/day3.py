"""
Problem definition:
	write a program that converts a signed 4-bit binary number to decimal
Analysis:
	The input will be of base 2, but the first bit is the sign bit
	the remaining bit is the value of interest
	there must be 4-bit in size given
	none of the bits must exceed 1 or be below 0
	the output will be a decimal number
Design:
	accept the binary number a string of size 4 as, b
	make sure the bit are in [0,1]
	get the sign from the first bit as, s
	split it into a list as, l
	find the sum of the product of the remainig bit and their position as, p
	return the product of p by s
	
Sample test:
	Input | Output
	1100  | -4
	0100  | +4
"""

b = input("Enter a 4-bit binary number: ")

if len(b) == 4:
	for i in b:
		if not (0 <= int(i) <= 1):
			print("A binary bit must 0 0r 1")
			break
			
	s = 1 if int(b[0]) == 0 else -1	
	o = 0
	
	for j in range(1, 4):
		o += int(b[j]) * (2 ** (3 - j))
		
	an = o * s
	
	print(b, "==", an)
else:
	print("Please enter a 4-bit binary number")

