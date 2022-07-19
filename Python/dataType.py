# data types in python


# NUMBERS(INT, FLOAT, COMPLEX)
# int / Integer
a = 10
print("type of this ",type(a))

# float
b = 2.24
print("type of this ",type(b))

# complex  ( 1 + 2j => x + yj )
c = 1 + 2j
print("type of this ",type(c))

# sttr / string
d = "hello world"
dd = """hello
python
This is a multi line 
strings
"""
print(dd)
print("type of this ",type(d))

# some other function on strings..
firstName = "khUShal Grover"
firstName.lower()
print(firstName)
# or we can directly use print(firstName.lower)
firstName = firstName.lower()
print(firstName)                # khushal grover
print(firstName.capitalize())   # Khushal grover
print(firstName.title())        # Khushal Grover
print("is lower",firstName.islower())      # true # check is in lower case
print("is alpha",firstName.isalpha())      # true # check is all alphabets
print("is digit",firstName.isdigit())      # false # check is it contain numbers
secName = input("whats ur name? ").strip() # strip remove useless space
print("lenght of secName var is {}".format(len(secName))) # here we are using format function



# list
e = [10, 20, 30]
print("element of d ", type(e)," is : ", e)
e.insert(2,23)
print(e)

#tuple
months = ("jan", "feb", "mar")
print(type(months))
# months.insert(0,"khushal") Error bcz tuple are imputeable so we can not modify...
 
# set
f = {1,12,32,13,12,3}
print(type(f))
print(f)



# dictionary : key/value
g = {1:"khushal", 2:"sunny"}
print(g[2])
print(type(g))