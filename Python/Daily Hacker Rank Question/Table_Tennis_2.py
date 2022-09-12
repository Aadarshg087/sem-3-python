t = int(input())
while t > 0:
    str = input()
    count = 0
    for i in str:
        if i == "1":
            count = count+1
    print(count)
    if count >= 11:
        print("WIN")
    else:
        print("LOSE")
    t = t-1
