import random
userChoice = int(input("Enter your choice :\n type 0 for Rock, type 1 for Paper, 2 for Scissor"))
if userChoice >= 3:
    print("Enter valid number")
    exit()
else:
    compChoice = random.randint(0,2)
    print("Computer Chose: ")
    print(compChoice)
    if(compChoice == userChoice):
        print("It's a draw")
    elif compChoice == 0 and userChoice == 2:
        print("you lose")
    elif userChoice == 0 and compChoice ==2:
        print("You won")
    elif compChoice > userChoice:
        print( "you lose")
    elif compChoice < userChoice:
        print("You won")

