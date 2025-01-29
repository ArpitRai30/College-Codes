# creating a function

# def findSum(a, b):
#     result = a + b
#     return result

# x = int(input("x: "))
# y = int(input("y: "))
# print(f"{x} + {y} = {findSum(x,y)}")




# return multiple values

# def arithmetic(num1, num2):
#     add = num1 + num2
#     sub = num1 - num2
#     multiply = num1 * num2
#     div = num1 / num2
#     return add, sub, multiply, div

# x = int(input("x: "))
# y = int(input("y: "))
# print(arithmetic(x, y))




# positional arguments

# def myFunc(fname, lname):
#     print(f"My first name is {fname} and my last name is {lname}")

# myFunc("Arpit", "Rai")




# keyword arguments

# def my_func(fname, lname):
#     print(f"My first name is {fname} and my last name is {lname}")

# my_func(lname = "Rai", fname = "Arpit")




# default arguments

# def my_func(fname, lname = "Rai"):
#     print(f"My first name is {fname} and my last name is {lname}")

# my_func("Arpit")




# variable-length positional arguments

# def sum_num(num1, *num):
#     result = num1
#     for i in num:
#         result += i 
#     return result

# r = input("Enter list:").split()
# r = [int(num) for num in r]
# s = sum_num(*r)
# print("sum =", s)




# variable length keyword arguments

# def my_func(**name):
#     print(f"The first name is {name['fname']}, middle name is {name['mname']} and last name is {name['lname']}")

# my_func(fname = "Arpit", mname = "Kumar", lname = "Rai")




# factorial

# def fact(n):
#     if n == 0 or n == 1:
#         return 1
#     else:
#         return n * fact(n-1)
    
# x = int(input("Enter num: "))
# print("Factorial =", fact(x))




# nth fibonacci number

# def fibonacci(n):
#     if n == 0 or n == 1:
#         return n 
#     else:
#         return fibonacci(n-1) + fibonacci(n-2)

# x = int(input("Enter n: "))
# print("nth Fibonacci num is", fibonacci(x))




# check palindrome

# def is_palindrome(n):
#     return n == n[::-1]

# x = input("Enter string: ").lower()
# if is_palindrome(x) == True:
#     print("Palindrome")
# else:
#     print("Not palindrome")




# check anagram

# def are_anagrams(s1, s2):
#     if len(s1) == len(s2):
#         for s in s1:
#             if s not in s2:
#                 print("Not anagrams")
#                 break
#         else:
#             print("Anagrams")
#     else:
#         print("Not anagrams")

# str1 = input("Enter 1st string: ")
# str2 = input("Enter 2nd string: ")
# are_anagrams(str1, str2)



# def are_anagrams(s1, s2):
#     if sorted(s1) == sorted(s2):
#         print("Anagrams")
#     else:
#         print("Not anagrams")

# str1 = input("Enter 1st string: ")
# str2 = input("Enter 2nd string: ")
# are_anagrams(str1, str2)






# longest word in a sentence

# def longest_word(text):
#     txt = text.split()
#     g = txt[0]
#     for i in txt:
#         if len(i) > len(g):
#             g = i 
#     return g

# s = input("Enter sentence: ")
# print(f"Longest word is '{longest_word(s)}'")




# sum of cube of digits

# def cube(n):
#     p = str(n)
#     s = 0
#     for i in p:
#         s += int(i) ** 3
#     return s

# x = int(input("num: "))
# print(cube(x))