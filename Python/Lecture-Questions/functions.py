def max_min(L1):
    maxi = None
    mini = None
    for i in L1:
        if maxi is None or i > maxi:
            maxi = i
        if mini is None or i < mini:
            mini = i
    print("Max is:", maxi)
    print("Min is:", mini)


L1 = [3, 547, 7, 3, 75, 2, 8, 654, 89, 2, 6]
max_min(L1)
