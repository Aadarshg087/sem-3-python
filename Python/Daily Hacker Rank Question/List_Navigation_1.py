t = int(input())
while t > 0:
    List1 = [12, 32, 44, 33, 56, 77, 87, 22, 11, 32]
    position = int(input())
    if position > 10:
        print("Not a valid Index")
    elif position == 0:
        print("program quits")
    else:
        print(List1[position-1])
    t = t-1
