# Python Programming Language introduction INT213
# open-source, object-oriented, high-level powerful programming language
# Developed by Guido van Rossum


# the type function will define the type of the Variable
# a = 4
# print(a)
# print(type(a))

# # it does need to define the length of size of the integer
# b = 24246558678785663424554754
# print((b))
# print(type(b))

# # This will print the string(q)
# q = "Ajmer"
# print(q)
# print(type(q))

# z = True
# print(z)
# print(type(z))

# # python is case sensitive language
# x = None
# print(x)
# print(type(x))

# # the number & symbols  are not allowed in python. It will give syntax error
# # 9x = 3
# # print(9x)

# # Since it is a case senitive language you cannot use same varible irrespective of tis case
# # p = 9
# # w = P*2
# # print(w)

# a, b, c = 2, 5, 6
# print(a, b, c)

# # It will show the value error as there are amny values than needed
# a, b = 2, 4, 6
# print(a, b)

# x, y, z = 2, 3
# print(x, y, z)

# a = b = c = 1
# print(a)

# list and can access it with index concept
# a = [1, 7, 9]
# print(a[2])

# concept of indexing will used multiple since it is a listed list
from ast import operator
from email import message
import keyword
from math import remainder
from xml.sax.handler import property_interning_dict
# c = [3, 6, [5, 2, 1], 11]
# print(c[2][1])


# Swapping the program
# a = 1
# b = 3

# a, b = b, a
# print(a, b)

# it will show the keyowrds that is present in the kwlist and can't be used as a variable
# print(keyword.kwlist)

#  checking whether the given work is a keyword or not
# keyword.iskeyword('False')


# y = 5280  # feet in a mile
# the input will taken in string and we need to convert it into float or integer
# x = input("Enter a number: ")
# ft = float(x)*y
# print(ft)

# F = "Ajmer"
# L = "Singh"
# print(F+" "+L)
# it will append the stirngs when added togther in the above program

# print((F+" ")*3)
# it will multiply the string in the output

# a = 3//2
# print(a)
# it will do the floor division(int value as output)
# basic / will do the division as floar

# x = 5
# y = x == 6
# print(x == 5)
# Checking the wether the cindition is true or not.

# x = 4
# print(x > 0 and x < 10)
# both conition needed to be true to get the output as true

# x = 4
# print(x % 2 == 0 or x % 3 == 0)
# either one of them needed to be true to get the output as true.

# x = 2**63
# y = 2**32
# print(str(y))
# print(str(x))
# 64 and 32 bit machine can store the no as the output

# print(~2)
# print(~-3)

# print(0b00000010)
# It will give the output as 2

# a = 0B111100  # 60
# b = 0b011110  # 30
# print(a ^ b)
# XOR operator

# a = 0B111100  # 60
# b = 0b011110  # 30
# print(a & b)
# bitwise AND operator


# a = 0B111100  # 60
# b = 0b011110  # 30
# print(a | b)
# Bitwise OR operator

# 2 = 0b10  # 2
# a = 2 << 2  # shift 2 bits
# print(a)
# Very interesting topic to be discussed
# output will 8 as it will shift the no. two bits into left side because of the << operants is used

# x = 3
# if(x < 0):
#     print("India")
# else:
#     print("Hello World")
# Syntax of the if condition in python


# **************** Question ***********************

# rate = int(input("Enter the rate: "))
# hours = int(input("Enter the number of hours: "))
# if(hours > 40):
#     default = rate*40
#     diff = hours-40
#     extra = diff*(rate*1.5)
#     total = extra + default
#     print(total)
# else:
#     print(hours*rate)


# *************** Chained Conditional ******************
# x = 2
# y = 2
# if x < y:
#     print("Something")
# elif x > y:
#     print("Anything")
# else:
#     print("Nothing")


# **************** Question *******************
# marks = int(input("Enter the marks: "))
# if marks >= 90:
#     print("Enter score: ", marks)
#     print("Your grade is: A")
# elif marks >= 80:
#     print("Enter score: ", marks)
#     print("Your grade is: B")
# elif marks >= 70:
#     print("Enter score: ", marks)
#     print("Your grade is: C")
# elif marks >= 60:
#     print("Enter score: ", marks)
#     print("Your grade is: D")
# elif marks < 60:
#     print("Enter score: ", marks)
#     print("Your grade is: F")


# **************** Nested if-else ******************

# x = 11
# y = 9
# if x == y:
#     print("Something")
# else:
#     if x < y:
#         print("Anything")
#     else:
#         print("Nothing")

# if x > 0 and x < 20:
#     print("Anything")

# ************************ try and catch statements****************

# inp = input("Enter in Farhenit Temperature: ")
# try:
#     fahr = float(inp)
#     cel = (fahr-32.0)*5.0/9.0
#     print(cel)
# except:
#     print("Enter the valid input")


# # ****************** Question *********************
# try:
#     rate = float(input("Enter the rate: "))
#     hours = float(input("Enter the number of hours: "))
#     print(rate)
#     print(hours)
# except:
#     print("Enter hours: ", hours)
#     print("Enter rate: ", rate)
#     print("Error, please enter a numeric input")

# ///////////////// Error ///////////////////////


# n = 4
# while n > 2:
#     print("Hello World")
#     n = n+1


# while True:
#     line = input('>')
#     if line == 'done':
#         break
#     print(line)
#     print('Done!')

# line = 'Ajmer Singh'
# print(line)
# print(line[0])


# ******************** For loop in python ***************
# friends = ['Joseph', 'Glenn', 'Sally']
# for i in friends:
#     print('Happy New Year:', i)
# print('Done!')


# count = 0
# for itervar in [3, 4, 32, 13, 54, 23]:
#     count = count+1
# print('Count:', count)

# import math as m
# c = dir(m)
# print(c)
# a = m.sin(30)
# print(a)

# def print_msg():
#     print('Line 1')
#     print('Line 2')
# Ajay = "Pradyumn Tripathi"


# def print_twice(Ajay):

#     print_twice(Ajay)
#     print_twice(Ajay)


# letter = fruit[1]
# print(letter)
# print(fruit[-1])
# print(fruit[-2])
# print(len(fruit))
# print(len(fruit)-1)

# fruit = "banana"
# x = len(fruit)-1
# print(x)  # 6
# while x >= 0:
#     print(fruit[x])
#     x = x-1


# index = 0
# fruit = 'banana'
# while index < len(fruit):
#     letter = fruit[index]
#     print(letter)
#     index = index+1


# **************************** String Slices **************************************
# s = 'Monty Python'
# print(s[3:])
# it will print till the end of the string
# print(s[3:5])
# 5 is not included. It will print only till the 4th index
# print(s[3:3])
# it will print the null value as output

# s[0] = 'a'
# print(s)
# it will show the error as output as it will only possible in list, not in string

# greeting = 'Hello World'
# newGreeting = 'J'+greeting[1:]
# newGreeting = 'K'+greeting[1:]
# print(newGreeting)
# Need more reserach on this topic and it will work though

# word = 'mango is my favourite fruit'
# count = 0
# for char in word:
#     if char == ' ':
#         count = count+1
# print(count)
# Counting the spaces in the string

# It will print the no of words
# name = 'Ajmer Singh'
# count = 0
# for char in name:
#     if char == ' ':
#         count = count+1
#         print(count+1, "words")


# sentence = "list value, length, membership, operations, slices, deletion, accessing elements, list and for loops, lists parameters and nested list"
# count = 0
# for space in sentence:
#     if space == ' ':
#         count = count+1
# print(count+1, 'words')

# Very important topic
# word = 'Hello'
# word2 = 'Ajmer'
# x = word == word2
# print(x)
# q = 'AAB'
# w = 'AAA'
# print(q)

