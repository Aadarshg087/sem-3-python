t = int(input())
while t > 0:
    str = input()
    length = len(str)
    str1 = ""
    for i in range(length-1, -1, -1):
        str1 = str1+str[i]
    if str == str1:
        print("wins")
    else:
        print("loses")
    t = t-1
