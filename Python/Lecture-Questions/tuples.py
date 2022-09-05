# tuples are almost like list and it has same indexing just as the list.
# Tuples are immutable.
# these are stings in the tuples

# t = ('a', 'b', 'c', 'd', 'e')
# u = ('a',)
# d = 'a'
# print(t)
# print(t[1])
# print(type(t))
# print(u)
# print(type(d))
# print(t[1:])
# print(t[1:4])

# t = ('A',)+t[1:]
# print(t)

# t = ('r', 'a', 'h', 'u', 'l', ' ', 'k', 'u', 'm', 'a', 'r')
# uppercase = ('R',)+t[1:5] + ('K',)+t[7:]
# print(t)
# print(uppercase)

# print((0, 1, 2) < (0, 3, 4))
# print((0, 1, 200000000) > (0, 3, 4))
# f = tuple('Ajmer')
# l = tuple('Singh')
# print(f, l)
# print(f > l)

# txt = 'but soft what light in yonder window breaks'
# words = txt.split()
# t = list()
# for word in words:
#     t.append((len(word), word))
# t.sort(reverse=True)
# print(t)
# E = list()
# O = list()
# for l, word in t:
#     if l % 2 == 0:
#         E.append(word)
#     else:
#         O.append(word)
# print(E)
# print(O)
# print(E+O)

# final = list()
# for l, word in t:
#     final.append(word)

# print(final)

import random as r
from traceback import print_tb


# def swap(x, y):
#     return y, x


# a = 3
# b = 2
# v = swap(a, b)
# It will print it as tuple to accomomdate the swapped values
# print(v)
# print(type(v))
# a, b = swap(a, b)
# print(a, b)


# def mulitply(x, y):
#     z = x*y
#     return z


# x = 8
# y = 9
# r = mulitply(x, y)
# print(r)

# def randomNum(n):
#     s = [0]*n
#     for i in range(n):
#         s[i] = r.random()
#     return s


# n = int(input("Enter a number: "))
# print(randomNum(n))


# print(inBucket(t(), ))


# generate a list of 20 random int which lies betwenn 0 to 30
# classify those 20 students into three categories
# range from 0-10
# range from 10-20
# range from 20-30

def inBucket(t, low, high):
    count = 0
    for num in t:
        if low <= num < high:
            count = count+1
    return count


t = []
for i in range(20):
    t.append(r.randint(0, 30))
c1 = inBucket(t, 0, 10)
c2 = inBucket(t, 10, 20)
c3 = inBucket(t, 20, 31)
print(c1, c2, c3)
print(t)

