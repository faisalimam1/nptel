'''
Develop a Python program that determines the mode of a list of n numbers,assume only one mode exists in the provided test cases. 
The program should ask for a single line of input containing n, then n space-separated numbers, and output the mode.

'''

from statistics import mode

nums = input().split(' ')
nums = [int(i) for i in nums]
print(mode(nums), end='')
