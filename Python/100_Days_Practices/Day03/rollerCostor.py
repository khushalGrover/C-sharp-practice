print("Welcome to the rollercoaster!")
height = int(input("what is your height in cm?\n"))
age = int(input("what is your age?\n"))


if height >= 120:
    print("you allow")
    if age >= 18:
        bill = 20
        print("you are adult so you have to pay 20 dollar")
    else:
        bill = 15
        print("you are not adult so you have to pay 15 dollar")

    wantToPhoto = input("want a photo service Y or N: ")
    if wantToPhoto == "y" or wantToPhoto == "Y":
        bill += 2
        print("u have to pay 2 dollar extra, so total bill is ${}".format(bill))
    elif wantToPhoto == "n" :
        print("no need for extra charge")
    else:
        print("please select proper choice")

else: 
    print("not allow")