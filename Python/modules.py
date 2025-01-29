# importing self made module

# import myModule
# x = int(input("Enter 1st num: "))
# y = int(input("Enter 2nd num: "))
# print(myModule.add(x, y))
# print(myModule.sub(x, y))
# print(myModule.pi)



# from myModule import add, sub
# x = int(input("Enter 1st num: "))
# y = int(input("Enter 2nd num: "))
# print(add(x, y))
# print(sub(x, y))



from mypackage import addmodule, submodule, sqmodule
a = int(input("enter num1: "))
b = int(input("enter num2: "))
c = int(input("enter sq num: "))
print(addmodule.add(a, b))
print(submodule.sub(a, b))
print(sqmodule.square(c))