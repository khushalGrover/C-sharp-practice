# BMI calculator
"""
Instrustions
 
 write a program that interets the Body Mass Index (BMI) Based on a user's weight and height.

 It should tell them the interperpretation of their BMI based on the BMI
 value.

    > under 18.5 ther are Underweight
    > Over 18.5 but below 25 they have a normal weight
    > over 25 but below 30 they are overweight
    > over 30 but below 35 they are obese
    > above 35 they are clinically obese.
"""

height = float(input("Enter ur height in m: "))
weight = float(input("Enter ur weight in kg: "))

# CACULATIONS     BMI = weight / (height * height)

bmi = round(weight/(height*height))


if bmi < 18.5:
    print("Your BMI is {0}, you are Underweight".format(bmi))
elif bmi > 18.5 and bmi < 25:
    print("Your Bmi is {}, you have a normal weight".format(bmi))
elif bmi > 25 and bmi < 30:
    print("Your Bmi is {}, you are over weight".format(bmi))
elif bmi > 30 and bmi < 35:
    print("Your Bmi is {}, you are obese ".format(bmi))
elif bmi > 35:
    print("Your Bmi is {}, you are clinically obese.".format(bmi))


