# Program to check if a number is prime or not
# num = 29
# To take input from the user
num = int(input("Enter a number to find primes: "))

# define a flag variable
flag = False# Program to check if a number is prime or not

# prime numbers are greater than 1
if num > 1:
    # check for factors
    for i in range(2, num):
        if (num % i) == 0:
            # if factor is found, set flag to True
            
            flag = True
            # break out of loop
            break

# check if flag is True
if flag:
    print(num, "is not a prime number")
else:
    print(num, "is a prime number")



