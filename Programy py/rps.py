import random as rn

p = ["rock", "paper", "scissors"]

while True:
    x = input("You play: ")
    print("I play: ",p[rn.randint(0,2)])