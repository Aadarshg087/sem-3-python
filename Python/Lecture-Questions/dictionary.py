# in dictionaries, the indices can be of any type
# dictionary are mutable
# eng2sp = dict()
# eng2sp is varaible name
# []-> list
# {}-> dictionary
# ()-> tuple
# print(type(eng2sp))
# print(eng2sp)

# #       key:     value
# eng2sp['one'] = 'uno'
# print(eng2sp)


# Multiple Assingment
# eng2sp['two'] = 'dos'
# eng2sp = {'one': 'uno', 'two': 'dos', 'three': 'tres'}
# print(eng2sp)
# print(eng2sp['one'])
# print(len(eng2sp))
# print(list(eng2sp.keys()))
# print(list(eng2sp.values()))
# print('uno' in eng2sp)


# WAP to make a dict which has letters as the key and the count of the letters as the value

from cgitb import text


text = "aadarsh"
d = dict()
for l in text:
    if l in d:
        d[l] = d[l]+1
    else:
        d[l] = 1
print(d)


# letter = {'A': 3, 'D': 1, 'R': 1, 'S': 1, 'H': 1}
# print(letter)
