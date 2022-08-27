#program to pick random name to paybill from user input list
import random
name_string = input("Give me everybody names, seprated by a comma.\n")
name = name_string.split(",")
# name = [abcd, khushal, ajay, amit, sahil, akki] 



# method 1
# pickedName = random.choice(name)
# print(pickedName)

# method 2
pickedName = name[random.randint(0, len(name))]

print("{} you have to pay bill.".format(pickedName))