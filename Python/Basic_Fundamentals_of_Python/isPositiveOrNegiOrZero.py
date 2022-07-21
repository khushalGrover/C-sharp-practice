# program to check is number positive, negitive or Zero?

a = float(input("Enter a number to check: "))

#method 1 [if..elif..else]
# if a==0:
#     print("Zero")
# elif a<0:
#     print("negitive")
# else:
#     print("poisitive")



#method 2 [nested if]
if a==0:
    print("Zero")
else:
    if a<0:
        print("negitive")
    else:
        print("positive")

