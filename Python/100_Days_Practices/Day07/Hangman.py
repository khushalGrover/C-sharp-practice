import random

word_list = ["apple", "baboon", "camel"]

# generate a random word
chosen_word = []
chosen_word = random.choice(word_list)
print((chosen_word))

# convert user input into lower case
guess = input("Guess a letter: ").lower()

# is the gussesd letter in word
    # true
for letter in chosen_word:
    if guess == letter:
        print("right guess")
    else:
        print("wrong")
