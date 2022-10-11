from unittest import result
class student:
    def __init__(self) :
        self.firstName = input("Enter first Name: ")
        self.lastName = input("Enter last Name: ")
        self.rollName = int(input("Enter Rollno.: "))
        self.mark1 = int(input("Enter marks 1: "))
        self.mark2 = int(input("Enter marks 2: "))
        self.mark3 = int(input("Enter marks 3: "))
    def showDetails(self):
        print("Name of student is: " + self.firstName +" "+ self.lastName)
        # print("RollNumber of student is: " + self.rollName)
    def result(self):
        result_number = self.mark1 + self.mark2 + self.mark3
        print("Student obtained " + str(result_number))
        print("Average Mark is: "+ str(result_number / 3)) 
std = student()
std.showDetails()
print("______________")
std.result()