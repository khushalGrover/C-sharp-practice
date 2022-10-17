# #protected acess modifiers -----. we can create the protected access modifiers with the help of single underscore

# # Protected variables or protected memebers of tha class are restriected to be used only by the member funtioncs and class members of  same class

# class Student:
#     def __init__(self):
#         self.name = "Khushal"
#     def _fucnname(self):
#         return "This is the Method Here"
# class Subject(Student):
#     print("this is in Sbject class")
#     pass

# obj = Student()
# obj1 = Subject()

# # calling using the object ref. of student class
# print(obj.name)
# print(obj._fucnname())

# # calling using the object ref. of subject class
# print(obj1.name)
# print(obj1._fucnname())

# ############
# # Multilevel inheritnce
# class Parent:
#     def func(self):
#         print("this is function 1")

# class Child(Parent):
#     def func2(self):
#         print("This is 2")

# class Child2(Child):
#     def func3(self):
#         print("this is child 3")

# ob = Child2()
# ob.func()
# ob.func2()
# ob.func3()



