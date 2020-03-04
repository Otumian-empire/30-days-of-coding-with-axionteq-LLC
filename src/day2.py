"""
Problem definition:
	write a program to find convert a given positive integer to
	base 2, 8 and 16
Analysis:
	The input is the base, b and the positive number, pNumber
	The output is bitArray
Design:
	the base, b and the positive number, pNumber will be both integers
	the result would be returned as an array
	
	check if pNumber is not 0,
	append the remainder when pNumber is divided by 0 to the bitArray
	ceil or integer divide pNumber and assign the result to pNumber.
	Repeat until pNumber is 0
	then return a reversed bitArray
"""
pNumber = int(input("enter a positive number: "))
b = int(input("enter a positive base: "))
bitArray = []

while pNumber != 0:
	bitArray.append(pNumber % b)
	pNumber = pNumber//b
bitArray.reverse()
print(bitArray)
