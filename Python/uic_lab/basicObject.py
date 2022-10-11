class Employee:

    def __init__(self,first,last,pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + "." + last + "@gmail.com"
        print(self.email)
        

emp = Employee("Khushal","Grover",2344)

print(emp.email)