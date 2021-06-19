weight,height =int(input()), float(input())
BMI = weight/height**2
result="Obesity"
if BMI<18.5:
    result="Underweight"
elif BMI<25:
    result="Normal"
elif BMI<30:
    result="Overweight"
print(result)
