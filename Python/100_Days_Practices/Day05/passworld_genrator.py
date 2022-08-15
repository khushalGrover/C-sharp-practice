# password generator Project

import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 
'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C','D','E',
'F','G','H', 'I', 'J','K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S']
numbers = ['0', '1', '2', '3', '4', '5', '6' , '7', '8', '9']
sybols = ['!', '@', '#','$', '%']

print("Welcome to the pyPassword Generator!")
nr_letters = int(input("How many letters you would you like in your password?\n"))
nr_symbols = int(input("How many sybols would you like?\n"))
nr_numbers = int(input("how many numbers would you like?\n"))


password = ""
# # METHOD 1    EASY
# 

# for char in range(1, nr_letters + 1):
#     random_char = random.choice(letters)
#     # print(random_char)
#     password += random_char 

# for char in range(1, nr_symbols + 1):
#     random_sybols = random.choice(sybols)
#     password += random_sybols

# for char in range(1, nr_numbers + 1):
#     random_numbers = random.choice(numbers)
#     password += random_numbers

# print(password)


# Method 2      HARD
password_list = []

for char in range (1, nr_letters + 1):
    password_list.append(random.choice(letters))

for char in range (1, nr_symbols + 1):
    password_list.append(random.choice(sybols))

for char in range (1, nr_numbers + 1):
    password_list.append(random.choice(numbers))

# Rabdomize order of chracters (passwordList elements)
random.shuffle(password_list)


for char in password_list:
    password += char
print("Password is: {0}".format(password))

