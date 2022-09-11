# program to find highest marks...

# take input as string and convert into list
student_marks = input("Input marks of student to find Topper").split()
for s in range(0, len(student_marks)):
    student_marks[s] = int(student_marks[s])


# checking...
heights_marks = 0
for marks in student_marks:
    if marks > heights_marks:
        heights_marks = marks
# results
print("Topper of class have marks; {}".format(heights_marks))
