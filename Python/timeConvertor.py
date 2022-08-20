X = int(input("Enter hours: "))
Y = int(input("Enter mins: "))
Z = int(input("Enter seconds: "))

totalSeconds = X*60*60 + Y*60 + Z
print("Total number of seconds are: ", str(totalSeconds))
