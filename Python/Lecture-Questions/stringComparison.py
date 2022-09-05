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

# data = "From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008"
# findS = data.find(' ')
# findSat = data.find('Sat')
# print(data[findS:findSat])


# *************** Format Operator *************************
# camels = 42
# print('I have spotted %d camels.' % camels)
# print('In %d years I have spotted %g %s.' % (3, 0.1, 'camels'))
# print('%d %d %d', % (1, 2, 0.3))


# while True:
#     line = input('>')
#     if line[0] == '#':
#         continue
#     if line == 'done':
#         break
#     print(line)
#     print('Done')


# while True:
#     line = input('>')
#     if line.startswith('#'):
#         continue
#     if line == 'done':
#         break
#     print(line)
#     print('Done')

from asyncio.windows_events import NULL
from turtle import clear


# e = NULL
# str = 'X-DSPAM-Confidence:0.8475'
# d = str.find(':')
# f = str[d+1:]
# flt = float(f)
# print(flt)
# print(e)


# ***************** List **************************
list = [10, 20, 30, 40]
list2 = ['crucnhy frog', 'ram bladder', 'lar vomit']
# print(list)
# print(list2)

# l1 = []
# print(list[2])
# list[2] = 34
# print(list)

# print(10 in list)
# print(20 in list)

# print(range(1, 3))
l3 = list+list2
print(l3)

# l3.remove(1)
print(l3)
