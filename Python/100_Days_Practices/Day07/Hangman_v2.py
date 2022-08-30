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
'''
]

word_list = ["apple", "banana","camel", "school"]

# generate a random word
chosen_word = []
chosen_word = random.choice(word_list)
word_length = len(chosen_word)

lives = 6

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
        print(f" Current position: {position} \n Current letter: {letter}\n Guessed letter: {guess}")
        if letter == guess:
            display[position] = letter
        else:
            print("no match")
            
    if guess not in chosen_word:
        lives -= 1
        if lives == 0:
            end_Of_Game = True 
            print("you Lose")
    print(display)

    if "_" not in display:
        end_Of_Game = True
        print("you win.") 



    print(stages[lives])

