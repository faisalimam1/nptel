'''
Create a Python program that calculates the sum of the squares of the first n natural numbers. 
The program should prompt the user to input a number n, then compute and print the sum of squares from 1 to n. 
'''

n=int(input())
print(n*(n+1)*(2*n+1)//6,end='')  #direct formula
