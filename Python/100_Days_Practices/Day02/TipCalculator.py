# Tip calculator
'''
program to split bill and tip among number of users 

'''

# welcome messeage
print("Welcome to the tip calculator")

# total amount of bill
billAmount = float(input("What was the total bill? $"))

# no of peoples
noUsers = int(input("How many people to split the bill? "))

# percentage of tip want ot give waiter
percentage = int(input("Enter amount of perctage of tip to give? 10, 12 or 15\n"))

# CALCULATION..

tipAmount = (billAmount * float(percentage)) / 100
# print("Amount of tip is: ${}".format(tipAmount))
totalAmount = billAmount + tipAmount

perHeadAmount = round(float(totalAmount / noUsers),2) # to round of values

finalAmount = "{:.2f}".format(perHeadAmount) # to get 2 decimal values
print("\n\nPer head amunt is: ${0}\n".format(finalAmount)) 




