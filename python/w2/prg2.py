'''
Write a Python program to calculate the arithmetic mean of n numbers, rounding the result to the nearest integer. 
The program should first take a single line of input containing n space-separated integer numbers, and then output the rounded mean of these numbers.
'''

nums=input().split(' ')
nums=[int(i) for i in nums]

sum=0
for x in nums:
	sum += x
print(sum//len(nums))
