maxi = None
mini = None
while True:
    k = (input("Enter a number:"))
    if k == 'done':
        break
    try:
        i = float(k)
        if maxi is None or i > maxi:
            maxi = i
        if mini is None or i < mini:
            mini = i
    except:
        print("Invalid Number")
print("Max is:", maxi)
print("Min is:", mini)
