# LAMBDA FUNCTION

# find sum of three numbers using lambda

# n1 = int(input("num1: "))
# n2 = int(input("num2: "))
# n3 = int(input("num3: "))
# result = lambda n1, n2, n3: n1 + n2 + n3
# print("sum =", result(n1, n2, n3))




# find greatest of two numbers

# n1 = int(input("num1: "))
# n2 = int(input("num2: "))
# g = lambda n1, n2: n1 if n1 > n2 else n2
# print(g(n1, n2))




# find even or odd number

# n = int(input("num: "))
# res = lambda n: print("even") if n % 2 == 0 else print("odd")
# res(n)




# product of two numbers

# n1 = int(input("num1: "))
# n2 = int(input("num2: "))
# p = lambda n1, n2: n1 * n2
# print(p(n1, n2))




# second element of a tuple

# t = (1, 2, 3, 'hello', 4.5)
# s = lambda t: t[1]
# print(s(t))






# FILTER FUNCTION

# find even numbers from a list

# numbers = []
# for i in range(10):
#     i = int(input('Enter numbers for list:'))
#     numbers.append(i)
# def is_even (n):
#     if n % 2 == 0:
#         return True

# even_numbers = filter(is_even, numbers)
# e = list(even_numbers)
# print(e)



# using lambda

# numbers = []
# for i in range(10):
#     i = int(input('Enter numbers for list:'))
#     numbers.append(i)
# even_numbers = filter(lambda n: n % 2 == 0, numbers)
# e = list(even_numbers)
# print(e)




# filter age greater than 18

# print("Enter list:", end = " ")
# i = input().split()
# age = [int(num) for num in i]
# adult = list(filter(lambda n: n > 18, age))
# print(adult)






# MAP FUNCTION

# cube list

# num = eval(input("Enter list:"))
# cube = list(map(lambda n: n ** 3, num))
# print(cube)




# area from radius

# r = input("enter radius list:").split()
# r = [int(i) for i in r]
# area = list(map(lambda n: 3.14 * n * n, r))
# print(area)






# REDUCE FUNCTION 

# find largest item from a list

# from functools import reduce
# l = input("Enter list:").split()
# l = list(int(i) for i in l)
# greatest = reduce(lambda a, b: a if a > b else b, l)
# print(greatest)




# sum of list

from functools import reduce
num = input("Enter list:").split()
num = [int(i) for i in num]
s = reduce(lambda a, b: a + b, num)
print(s)