#defination of function to check is prime
def isPrime(number):
    flag = False
    if number > 1:
        for j in range(2, number):
            if (number % j) == 0:
                flag = True
                break
    return flag
    # if flag:
    #     print(number, "is not a prime number")
    # else:
    #     print(number, "is a prime number")

for i in range(1, 1000):
    if isPrime(i)==0 and isPrime(i+2)==0:
        print(i,"  ", i+2)

