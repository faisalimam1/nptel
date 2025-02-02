'''
Create a Python program that takes a list of integers, reverses the list, 
adds the values at even indices from both the original and reversed lists,
and creates a new list with the result. The new list should be printed in the end.
'''
nums =input().split()
nums= [int(i) for i in nums]
reversed_nums = nums[::-1]
result = []
for i in range(len(nums)):
    if i % 2 == 0:
        result.append(nums[i] + reversed_nums[i])
    else:
        result.append(nums[i])
print(" ".join(map(str, result)),end='')

'''
Example:
Input:
1 2 3 4 5
Output:
6 2 6 4 6
'''
