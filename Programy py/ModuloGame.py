import random
import time


def inp_int(n):
    while True:
        try:
            n = int(n)
            break
        except ValueError:
            n = input("Please enter a number: ")
    return int(n)


def inp_pos(n):
    n = inp_int(n)
    while n <= 0:
        n = inp_int(input("Please enter a positive number: "))
    return int(n)


def text(state):
    print("There's ", str(state), " left")
    time.sleep(0.5)


def inp_player(state, k):
    x = inp_pos(input("You take:? "))
    while (k < x) or (x <= 0) or (x > state):
        x = inp_pos(input("Please enter a valid number: "))
    return x


def inp_pc(state, k):
    if state % (k + 1) == 0:
        x = random.randint(1, k)
    else:
        x = state % (k + 1)
    return x


def game(n, k, who):
    print(" ")
    state = n
    if who == 1:
        print("We start at ", str(n))
        while True:
            if state <= k:
                print("I take ", str(state))
                print("You lost")
                break
            else:
                temp = inp_pc(state, k)
                print("I take ", str(temp))
                state = state - temp
                text(state)
                state = state - inp_player(state, k)
                text(state)
            if state == 0:
                print("You win")
                break
    else:
        print("We start at ", str(n))
        while True:
            state = state - inp_player(state, k)
            text(state)
            if state == 0:
                print("You win")
                break
            elif state <= k:
                print("I take ", str(state))
                print("You lost - skill issue")
                break
            else:
                temp = inp_pc(state, k)
                print("I take ", str(temp))
                state = state - temp
                text(state)


# Game starts

decision = input("Wanna play the stick game? (y/n) ")

while not ((decision.lower() == "y") or (decision.lower() == "n")):
    decision = input("Please enter 'y' or 'n': ")

if decision.lower() == "n":
    print("I guess it's a no....")
    time.sleep(2)
    quit()
decision = input("Want me to explain the rules? (y/n) ")

while not ((decision.lower() == "y") or (decision.lower() == "n")):
    decision = input("Please enter 'y' or 'n': ")

if decision.lower() == "y":
    print("")
    print("Ok, so - we have two players and an 'n' amount of sticks.")
    time.sleep(1.5)
    print("Every player can take from 1 to 'k' sticks each turn")
    time.sleep(1.5)
    print("Player who takes the last stick wins")
    time.sleep(1.5)
    print("It's quite simple isn't it?")
    time.sleep(1.2)
    print("Let's begin.")
    time.sleep(1.5)
elif decision.lower() == "n":
    print("So you know them, ok")
    time.sleep(0.5)

while True:
    n = inp_pos(input("So... what's the n?: "))
    k = inp_pos(input("And the k?: "))
    who = random.randint(0, 9)
    print("I am flipping a coin:")

    for i in range(3):
        print(".")
        time.sleep(0.33)

    if who <= 4:
        who = 1
        print("I begin")
    else:
        who = 0
        print("Oh, it seems you begin")
    time.sleep(1)

    game(n, k, who)

    print("")
    decision = input("Want to play again? (y/n) ")
    while not ((decision.lower() == "y") or (decision.lower() == "n")):
        decision = input("Please enter 'y' or 'n' ")
    if decision.lower() == "n":
        print("Understood")
        time.sleep(2)
        quit()
