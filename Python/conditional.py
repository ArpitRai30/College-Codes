# eligibility of voting

# age = int(input("Enter age: "))
# c = input("Enter citizenship: ")
# if c == 'Indian':
#     if age >= 18:
#         print("You are eligible to vote in India")
#     else:
#         print("You are not eligible to vote")
# else:
#     print("You are not an Indian citizen")




# check consonant

# a = input("Enter an alphabet: ").lower()
# if len(a) == 1 and a.isalpha():
#     if a in 'aeiou':
#         print("Alphabet is a vowel")
#     else:
#         print("Alphabet is a consonant")
# else:
#     print("Enter valid single alphabet")




# calculate electricity bill

# units = float(input("Enter the number of units consumed: "))
# if units < 0:
#     print("Units cannot be negative. Enter valid output")
# else:
#     if units <= 100:
#         bill = units * 0.5
#     if units <= 200:
#         bill = 100 * 0.5 + (units - 100) * 0.75
#     else:
#         bill = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1
#     print(f"Total bill is ${bill:.2f}")




# find greatest number using if and elif

# a = int(input("1st num: "))
# b = int(input("2nd num: "))
# c = int(input("3rd num: "))
# if a > b and a > c:
#     print(f"{a} is greatest")
# elif b > a and b > c:
#     print(f"{b} is greatest")
# else:
#     print(f"{c} is greatest")




# greatest number using nested if

# a = int(input("1st num: "))
# b = int(input("2nd num: "))
# c = int(input("3rd num: "))
# if a > b:
#     if a > c:
#         print(f"{a} is greatest")
#     else:
#         print(f"{c} is greatest")
# else:
#     if b > c:
#         print(f"{b} is greatest")
#     else:
#         print(f"{c} is greatest")
    



# convert uppercase in lowercase and vice-versa

# ch = str(input("Enter character: "))
# for a in ch:
#     if a >= 'A' and a <= 'Z':
#         print(a.lower(), end = "")
#     elif a >= 'a' and a <= 'z':
#         print(a.upper(), end = "")
#     else:
#         print(a, end = "")




# roots of quadratic expression

# import math
# a = int(input("Enter coefficient of x^2: "))
# b = int(input("Enter coefficient of x: "))
# c = int(input("Enter constant: "))
# D = (b ** 2) - (4 * a * c)
# if D > 0:
#     print("Roots are real and distinct")
#     r1 = (-b + math.sqrt(D)) / 2 * a
#     r2 = (-b - math.sqrt(D)) / 2 * a
#     print(f"Roots are {r1} and {r2}")
# elif D == 0:
#     print("Roots are real and equal")
#     r = (-b + math.sqrt(D) / 2 * a)
#     print(f"Roots are {r}")
# else:
#     print("Roots are not real")




# determine quadrant of coordinate

# x = int(input("Enter x coordinate: "))
# y = int(input("Enter y coordinate: "))
# if x > 0 and y > 0:
#     print("1st quadrant")
# elif x < 0 and y > 0:
#     print("2nd quadrant")
# elif x < 0 and y < 0:
#     print("3rd quadrant")
# elif x > 0 and y < 0:
#     print("4th quadrant")
# elif x == 0 and y != 0:
#     print("Coordinate is on y-axis")
# elif y == 0 and x != 0:
#     print("Coordinate is on x-axis")
# else:
#     print("Coordinate is on origin")




# print day according to number

# n = int(input("Enter day number: "))
# days = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
# if n <= 7:
#     for i in range (0, 8):
#         if i == n:
#             print(days[i-1])

# else:
#     print("Enter a number between 1 and 7")




n = int(input("Enter number: "))
flag = 0
if n > 1:
    for i in range(2, n//2 + 1):
        if n % i == 0:
            print("Not a prime number")
            break
    else:
        print("Prime number")
else:
    print("Not a prime number")