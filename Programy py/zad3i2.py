import math

result, degree = 1.0, float(input("factorial of: "))

for i in range (1,int(degree)+1):
    result = result*pow(float(i),(1/degree))

print(str(int(degree))+"th root of "+str(int(degree))+"! is "+str(result))