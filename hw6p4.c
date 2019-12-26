#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  Author: John Cody
//  Date created: 03/13/2018
//  Program Description: This program plays a game of hangman with the user. 

void star(char *og, char attempt, char *star, int *attempts);
void hangman(char *base, char *suns, int *tries);


int main(void) {

	int attempts = 7;
	char word[8] = "squeeze";
	char stars[8] = "*******";

	printf("Let's play hangman. The secret word is: \n");
	printf("%s\n", stars);
	
	hangman(&word, &stars, &attempts);

	if (attempts > 0) {
		printf("\nCongratulations! You found the secret word: %s", word);
	}
	else if (attempts == 0) {
		printf("\nGame over! The secret word was: %s", word);
	}

	printf("\n");

	return 0;
}

void star(char *og, char attempt, char *star, int *attempts) {
	
	int x = 0, counter = 0;

	for (x = 0; x < 7; x++) {
		if (*(og + x) == attempt) {
			*(star + x) = *(og + x);
			counter++;
		}
	}

	if (counter > 0) {
		printf("%c was found %d times in the secret word\n", attempt, counter);
	}
	if (counter == 0) {
		*attempts = *attempts - 1;
		printf("%c is not in the secret word, You have %d tries left.", attempt, *attempts);
	}

}

void hangman(char *base, char *suns, int *tries) {
	char guess;

	while ((strcmp(base, suns) != 0) && (&tries != 0)) {
		printf("\nGuess a letter : ");
		scanf(" %c", &guess);
		star(base, guess, suns, tries);
		printf("\n%s", suns);
	}
}