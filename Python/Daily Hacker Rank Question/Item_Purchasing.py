y = int(input())
while y >= 0:
    lst = []
  
quantity = int(input())
  

for i in range(0, n):
    ele = int(input())
  
    lst.append(ele)
    quantity = float(input())
    rate = float(input())
    if quantity > 1200:
        discount = (10/100)*(quantity*rate)
    else:
        print(quantity*rate)
    y = y-1


