import random

stages = ['''
  +------+
  |      |
  o      |
 /|\     |
 / \     |
         |
==========
''',
'''
  +------+
  |      |
  o      |
 /|\     |
 /       |
         |
==========
''',
'''
  +------+
  |      |
  o      |
 /|\     |
         |
         |
==========
''',
'''
  +------+
  |      |
  o      |
 /|      |
         |
         |
==========
''',

'''
  +------+
  |      |
  o      |
 /       |
         |
         |
==========
''',
'''
  +------+
  |      |
  o      |
         |
         |
         |
==========
''',
'''
  +------+
  |      |
         |
         |
         |
         |
==========
''',
'''
  +------+
         |
         |
         |
         |
         |
==========
''',
'''
W         W     IIIII    NN   N
 W   W   W        I      N N  N
  W  w  W         I      N  N N
   W   W        IIIII    N   NN
 
''',
'''
L         oooo      ssss   EEEEEE
L        o    o    ss      E 
L        o    o     ssss   EEE
L        o    o       ss   E
LLLLL     oooo     ssss    EEEEEE
'''
]

word_list = ["apple", "banana","camel", "school"]

# generate a random word
chosen_word = []
chosen_word = random.choice(word_list)
word_length = len(chosen_word)

lives = 7

print(f'passt, the solution is {chosen_word}')

# create blanks
display = []
for _ in range(word_length):
    display += "_"

end_Of_Game = False

while not end_Of_Game:
    guess = input("Guess a letter: ").lower() # convert user input into lower case
    
    # Check guess letter
    for position in range(word_length):
        letter = chosen_word[position]
        # print(f" Current position: {position} \n Current letter: {letter}\n Guessed letter: {guess}")
        if letter == guess:
            display[position] = letter
        else:
            print("   ")
            # print("no match")
            
    if guess not in chosen_word:
        lives -= 1
        if lives == 0:
            end_Of_Game = True 
            print("you Lose")
            lives = 9
    print(display)

    if "_" not in display:
        end_Of_Game = True
        print("you win.") 
        lives = 8



    print(stages[lives])

