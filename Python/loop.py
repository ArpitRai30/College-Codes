# use of continue

# for i in range(6):
#     if i == 3:
#         continue
#     print(i)



# # use of pass
# for i in range(5):
#     if i == 2:
#         pass # placeholder for future codes
#     print(i)



# fibonacci series

# n = int(input("Enter number of terms for Fibonacci series: "))
# if n <= 0:
#     print("Enter a positive integer")
# else:
#     a, b = 0, 1
#     print("Fibonacci series:")
#     for i in range (n):
#         print(a, end = " ")
#         a, b = b, a + b 




# factorial by loop

# n = int(input("Enter a number: "))
# if n < 0:
#     print("Factorial is not defined for negative number")
# elif n == 0:
#     print("Factorial = 0")
# else:
#     fact = 1
#     for i in range(1, n+1):
#         fact *= i 
#     print("Factorial =", fact) 




# table of any number

# n = int(input("Enter num: "))
# for i in range (1, 11):
#     print(f"{n} X {i} = {n * i}")




# sum of first n natural numbers

# n = int(input("Enter number of natural numbers to add: "))
# sum = 0
# for i in range (n+1):
#     sum += i 
# print(sum)




# sum of digits of a number

# n = int(input('Enter number: '))
# sum = 0
# while n != 0:
#     r = n % 10
#     sum += r 
#     n //= 10
# print("sum of digits:", sum")




# palindrome number

# n = int(input("Enter number: "))
# sum = 0
# q = n 
# while q != 0:
#     r = q % 10 
#     sum = sum * 10 + r
#     q //= 10
# print("Reverse of number is", sum)
# if sum == n:
#     print("Number is a palindrome")
# else:
#     print("Number is not a palindrome")




# print armstrong numbers from 1 to n

# n = int(input("Enter n: ")) 
# for i in range (10, n+1):
#     l = len(str(i))
#     sum = 0
#     q = i 
#     while q != 0:
#         r = q % 10
#         sum += r ** l 
#         q //= 10
#     if sum == i:
#         print(i, end = " ")
 



# prime numbers from m to n

# m = int(input("Enter starting: "))
# n = int(input("Enter end: "))
# for i in range (m, n+1):
#     if i > 1:
#         flag =  0
#         for j in range (2, i // 2 + 1):
#             if i % j == 0:
#                 flag = 1
#         if flag == 0:
#             print(i, end = " ")
