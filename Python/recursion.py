# sum of first n natural numbers

# def sum_n(x):
#     if x == 1:
#         return 1
#     else: 
#         return x + sum_n(x-1)

# n = int(input("Enter number of numbers to add: "))
# print("sum:", sum_n(n))




# factorial of a number

# def factorial(x):
#     if x == 0 or x == 1:
#         return 1
#     else:
#         return x * factorial(x-1)

# n = int(input("Enter num: "))
# print("Factorial =", factorial(n))




# nth fibonacci num

# def fib(n):
#     if n == 0 or n == 1:
#         return n
#     else:
#         return fib(n-1) + fib(n-2)
    
# x = int(input("Enter n: "))
# print("nth fibonacci number is", fib(x))




# GCD

# def gcd(a, b):
#     while b:
#         a, b = b, a % b
#     return a 

# x = int(input("num1: "))
# y = int(input("num2: "))
# print(gcd(x, y))




# sum of digits

# def sum_d(x):
#     s = str(x)
#     sum = 0
#     for i in s:
#         sum += int(i)
#     return sum 

# n = int(input("num: "))
# print(sum_d(n))




