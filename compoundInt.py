#!/usr/bin/python
import math
def compoundInterest(principal, periods, rate):
    value=math.pow(1+rate, periods)*principal
    return value

print ("This program will compute future value of sum of money \n")
principal= float(input("Please enter the current value of investment\n"))
periods= int (input ("Please enter the number of periods\n"))
rate= float(input ("please enter the interest rate\n"))
value=compoundInterest(principal, periods, rate)
print(value)

flag=int(input("Please enter 1 to continue or 0 for exit: "))
if flag==1 :
    print ("This program will compute future value of sum of money \n")
    principal= float(input("Please enter the current value of investment\n"))
    periods= int (input ("Please enter the number of periods\n"))
    rate= float(input ("please enter the interest rate\n"))
    value=compoundInterest(principal, periods, rate)
    print(value)
    flag=int(input("Please enter 1 to continue or 0 for exit: "))

if flag==0 :
    print("Thank you for using our future value computing tool")