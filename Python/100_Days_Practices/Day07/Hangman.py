from pickle import TRUE
import random

word_list = ["apple", "baboon", "camel"]

# generate a random word
chosen_word = []
chosen_word = random.choice(word_list)
word_length = len(chosen_word)


print(f'passt, the solution is {chosen_word}')

display = []
end_Of_Game = False
while not end_Of_Game:
    guess = input("Guess a letter: ").lower() # convert user input into lower case
    # Check guess letter
    for position in range(word_length):
        letter = chosen_word[position]
        print(f" Current position: {position} \n Current letter: {letter}\n Guessed letter: {guess}")
        if letter == guess:
            display[position] = letter
    print(display)

if "_" not in display:
    end_Of_Game = TRUE
    print("you win.") 


