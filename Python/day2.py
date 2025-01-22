# convert uppercase & lowercase

# text = str(input("Enter text: "))
# print(text.upper())
# print(text.lower())




# number of occurence

# text = "banana"
# print(text.count("a"))




# check starting and ending

# text = "Hello, Pyhton!"
# print(text.startswith("Hello"))
# print(text.endswith("Hello"))




# replace space with hyphen

# text = "Python is amazing"
# print(text.replace(" ", "-"))




# extracting initials

# def get_initials(fullName):
#     names = fullName.split()
#     initials = "".join([name[0].upper() for name in names])
#     return initials

# name = str(input("Enter full name: "))
# print(get_initials(name))




# count vowels

# def count(text):
#     vowels = "aeiouAEIOU"
#     return sum(1 for char in text if char in vowels)

# sentence = str(input("Enter sentence: "))
# print(count(sentence))




# reverse words

# def reverse(text):
#     words = text.split()
#     reversed_sent = " ".join(reversed(words))
#     return reversed_sent

# sentence = str(input("Enter sentence: "))
# print(reverse(sentence))




# count different characters

# text = str(input("Enter text: "))
# a = str(input("Enter character to count: "))
# print(text.count(a))




# count number of words

# text = str(input("Enter sentence: "))
# words = len(text.split())
# print(words)




# sort characters in descending order

# text = str(input("Enter string: "))
# print(sorted(text)[::-1])




# sort in lexicographical order (Dictionary order)

# s = str(input("Enter string: "))
# print(sorted(s))




# concatenation of two strings

# s1 = str(input("Enter string 1: "))
# s2 = str(input("Enter string 2: "))
# print(s1 + "",s2)




# length of string

# s = str(input("Enter string: "))
# print(len(s))




# length without using function

# s = str(input("Enter string: "))
# count = 0
# for char in s:
#     count += 1

# print(count)




 # check palindrome

# def palindrome(text):
#     text = text.replace(" ", "").lower()
#     return text == text[::-1]

# s = str(input("Enter string: "))
# if palindrome(s) == True:
#     print(f"{s} is a palindrome")
# else:
#     print(f"{s} is not a palindrome")




# print first name

# def firstName(fullName):
#     name = fullName.split()
#     return name[0]

# name = str(input("Enter full name: "))
# print(firstName(name))




# delete consonants

# str = str(input("Enter string: "))
# newString = ""
# for char in str:
#     if char in "aeiouAEIOU":
#         newString += char

# print(newString)




# perfect number 

# n = int(input("Enter a number: "))
# sum = 0
# for i in range(1, (n // 2) + 1):
#     if(n % i == 0):
#         sum += i

# if(sum == n):
#     print(f"{n} is a perfect number")
# else:
#     print(f"{n} is not a perfect number")




