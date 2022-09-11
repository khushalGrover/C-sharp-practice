# Average height of student, with and without using sum() and len()


# Inputing...
students_height = input("Input a list of stuent heights").split()
# converting input string in list
for n in range (0, len(students_height)):
    students_height[n] = int (students_height[n])
print(students_height)    




# calculation with using sum() and len()
# total_height = sum(students_height) 
# number_of_student = len(students_height)


# calculation without using
total_height = 0
for height in students_height:
    total_height += height

number_of_student = 0
for student in students_height:
    number_of_student += 1





# result...
average_height = round(total_height / number_of_student)
print(average_height)