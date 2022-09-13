import random
from hangman_words import word_list
from hangman_art import logo, stages
# from hangman_art import stages

word_list = ["apple", "banana","camel", "school"]

# generate a random word
chosen_word = []
chosen_word = random.choice(word_list)
word_length = len(chosen_word)

lives = 7
print(logo)

print(f'passt, the solution is {chosen_word}')

# create blanks
display = []
for _ in range(word_length):
    display += "_"

end_Of_Game = False

while not end_Of_Game:
    # print(display[])
    guess = input("Guess a letter: ").lower() # convert user input into lower case
    
    if guess in display:
        print(f"You've already guessed {guess}")


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
        print(f"You Gussed {guess}, that's not in the word. You lose a life.")
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

