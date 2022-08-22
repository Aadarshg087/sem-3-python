# print("String Commparison program")
# s = input("Enter a string: ")
# t = input("Enter a stirng: ")
# if s > t:
#     print("First stirng is greater")
# else:
#     print("Second string is greater")

# txt = "Hello, welcome to my world."

# x = txt.find("welcome")

# print(x)

data = "From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008"
x = data.find('@')
space = data.find(' ')
print(data[space:x])
print(space)
