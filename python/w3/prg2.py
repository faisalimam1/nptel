'''
Create a Python program that removes even duplicate positive integer numbers(includes zero) from a list and prints the unique numbers in the order they first appeared.
The program should prompt the user to input a list of numbers, then process the list to remove duplicates and print the resulting list of unique numbers.
'''
nums =input().split()
nums= [int(i) for i in nums]
seen_evens = set()
unique_nums = []
for num in nums:
    if num % 2 != 0 or num not in seen_evens:
        unique_nums.append(num)
        if num % 2 == 0:
            seen_evens.add(num)
print(" ".join(map(str, unique_nums)), end='')

'''
Example:
Input:
10 8 8 8 8 9 9
Output:
10 8 9 9
'''
