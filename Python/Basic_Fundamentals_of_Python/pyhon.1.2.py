from math import sqrt
def sumProperDiv(num):
    sumOfDiv = 0
    for divisor in range(2, int(sqrt(num)) + 1):
        if num % divisor == 0:
            if divisor == (num / divisor):
                sumOfDiv += divisor
            else:
                sumOfDiv += divisor + (num / divisor)
    return int(sumOfDiv + 1)
def isAmicable(n1, n2):
    if sumProperDiv(n1) == n2 and sumProperDiv(n2) == n1:
        return True
    else:
        return False
def getAmicable(n1, n2):
    result = []
    for i in range(n1, n2 + 1):
        for j in range(n1 + 1, n2 + 1):
            if i != j:
                if isAmicable(i, j):
                    result.append(tuple(sorted((i, j))))
    return list(set(result))
print(getAmicable(50, 2339))
