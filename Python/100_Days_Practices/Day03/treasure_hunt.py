# a Classsic Game base on basic conditions
def gameOver():
    print("GAME OVER !!!!")
    

print("""
Welcome to the Treasure Hunt Island.

Your mission is to find the treasure """)

choice1 = input("left or right\n")
if choice1 == "right":
    gameOver()
elif choice1 == "left":
    choice2 = input("swim or wait: ")
    if(choice2 == "swim"):
        print("Eaten by Sharks!!!!")
        gameOver()
    elif choice2 == "wait":
        print("You find new cave which lead you to new parth of island where a ruins")
        choice3 = input("chosse a door: red or bule or yellow")
        if choice3 == "red":
            gameOver()
        elif choice3 == "blue":
            gameOver()
        elif choice3 == "yellow":
            print("you WIN !!!")



