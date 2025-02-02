'''
Create a Python program that finds the second smallest number in a list of positive integers (including zero). 
The program should prompt the user to input a list of numbers, then compute and print the second smallest number in that list.
'''
nums=input().split()
nums=[int(i) for i in nums]
sorted_list=sorted(set(nums))
print(sorted_list[1], end='')
