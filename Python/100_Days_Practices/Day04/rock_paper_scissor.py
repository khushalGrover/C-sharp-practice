# virtual Rock, paper and scissors
import random
def draw():
    print("ohh my GOD its draw cpu={0} and user={1}".format(cpu, user))

def win():
    print("You Win!!!, cpu={0} and user={1}".format(cpu, user))

def loss():
    print(" ohh no CPU Win, cpu={0} and user={1}".format(cpu, user))
# user turn...
user = int(input("Enter ur choice: 0 = rock, 1 = paper and 2 = scissor"))

# computer turn...
cpu = random.randint(0, 2)


# checking....
if user == cpu:
    draw()
else:
    if user == 0 and cpu == 2:
        win()
    elif user == 0 and cpu == 1:
        loss()
    elif user == 1 and cpu == 0:
        win()
    elif user == 1 and cpu == 2:
        loss()
    elif user == 2 and cpu == 0:
        win()
    elif user == 2 and cpu == 1:
        loss()
