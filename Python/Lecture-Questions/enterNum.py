import numbers
count = 0
while True:
    n = input("Enter a number:")
    if n == 'done':
        break
    try:
        N = float(n)
        total = total+N
        count = count+1
    except:
        print('Invalid Input')
print('Total: ', str(total))
