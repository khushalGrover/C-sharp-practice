# Tip calculator
'''
program to split bill and tip among number of users 

'''

print("Welcome to the tip calculator")
billAmount = float(input("What was the total bill? $"))
noUsers = int(input("How many people to split the bill? "))
percentage = int(input("Enter amount of perctage of tip to give? 10, 12 or 15\n"))
# if percentage != 10:
#     if percentage != 12:
#         if percentage != 15
#             print("error please enter valid percentage")

tipAmount = (billAmount / float(percentage)) 
print("Amount of tip is: ${}".format(tipAmount))
totalAmount = billAmount + tipAmount

perHeadAmount = float(totalAmount / noUsers)
# print(type(perHeadAmount))
print("\n\nPer head amunt is: ${0}\n".format(perHeadAmount))




