# user input
num1 = int(input("Enter A number to print Table: "))

# calculations
for n in range(num1, (num1*10)+1 , num1):
    print("{0} * {1} = {2}".format(num1, int(n/num1), n))
    # print(n)


