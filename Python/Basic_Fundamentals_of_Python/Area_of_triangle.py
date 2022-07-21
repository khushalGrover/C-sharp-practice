# Area of triangle

a = float(input("enter value of a: "))
b = float(input("enter value of b: "))
c = float(input("enter value of c: "))
s = (a + b + c) / 2
area =  (s* (s-a)*(s-b)*(s-c)) ** 0.5
# print("result is: {0}".format(area))
print("area is %0.2f" %area)