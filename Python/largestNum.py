L1 = [3, 41, 12, 9, 74, 15]
largeNum = None
print('Before:', largeNum)
for i in L1:
    if largeNum is None or i > largeNum:
        largeNum = i
    print('Loop:', i, largeNum)
print("Largest:", largeNum)

print("-------------------------")

L1 = [3, 41, 12, 9, 74, 15]
smallNum = None
print('Before:', smallNum)
for i in L1:
    if smallNum is None or i < smallNum:
        smallNum = i
    print('Loop:', i, smallNum)
print("Samllest:", smallNum)
