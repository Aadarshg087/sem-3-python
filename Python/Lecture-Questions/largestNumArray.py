print("Printing the largest and the smallest number in the array")
L1 = [3, 41, 12, 9, 74, 15]
print("L1 =", L1)
largeNum = None
for i in L1:
    if largeNum is None or i > largeNum:
        largeNum = i
print("Largest:", largeNum)

smallNum = None
for i in L1:
    if smallNum is None or i < smallNum:
        smallNum = i
print("Samallest:", smallNum)
