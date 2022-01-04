'''
This game will guess our number, and also shows in how many guesses it will be geting that number.

Suppose I guess 429

Working -->

please think of a number between 1 and 1000
press ENTER  to start.
	Guessing in the range of 1 to 1000.
My guess is 500. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> l
	Guessing in the range of 1 to 499.
My guess is 250. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> h
	Guessing in the range of 251 to 499.
My guess is 375. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> h
	Guessing in the range of 376 to 499.
My guess is 437. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> l
	Guessing in the range of 376 to 436.
My guess is 406. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> h
	Guessing in the range of 407 to 436.
My guess is 421. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> h
	Guessing in the range of 422 to 436.
My guess is 429. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> c
I got it in 7 guesses!!

'''

low = 1
high = 1000

print(f"please think of a number between {low} and {high}")
input("press ENTER  to start.")

guesses = 1

while True:
    print(f"\tGuessing in the range of {low} to {high}.")
    guess = low + (high - low) //2
    high_low = input("My guess is {}. Should I guess higher or lower? Enter h or l ,or c if my guess was correct. --> ".format(guess)).casefold()
    if high_low == "h":
        low = guess + 1
    elif high_low == "l":
        high = guess - 1
    elif high_low == "c":
        print("I got it in {} guesses!!".format(guesses))
        break
    else:
        print("please enter h, l, c")
    guesses = guesses + 1
