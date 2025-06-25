#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 6
#define MAX_WORD_LEN 20

int main() {
    const char* words[] = {"programming", "hangman", "computer", "algorithm", "developer"};
    const int wordCount = sizeof(words)/sizeof(words[0]);
    
    srand(time(NULL));
    const char* word = words[rand() % wordCount];
    const int wordLength = strlen(word);
    
    char guessed[MAX_WORD_LEN] = {0};
    char incorrectLetters[MAX_TRIES+1] = {0};
    int tries = 0;
    
    // Initialize guessed word with underscores
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = '_';
    }
    guessed[wordLength] = '\0';

    while (tries < MAX_TRIES) {
        printf("\nWord: %s\n", guessed);
        printf("Incorrect: %s\n", incorrectLetters);
        printf("Tries left: %d\n", MAX_TRIES - tries);
        printf("Guess a letter: ");
        
        char letter;
        scanf(" %c", &letter);
        
        // Check for repeat guesses
        if (strchr(guessed, letter) || strchr(incorrectLetters, letter)) {
            printf("Already guessed!\n");
            continue;
        }
        
        // Check for correct guess
        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == letter) {
                guessed[i] = letter;
                found = 1;
            }
        }
        
        if (!found) {
            incorrectLetters[tries++] = letter;
            incorrectLetters[tries] = '\0';
        }
        
        // Check win condition
        if (strcmp(word, guessed) == 0) {
            printf("\nYou won! The word was: %s\n", word);
            return 0;
        }
    }
    
    printf("\nYou lost! The word was: %s\n", word);
    return 0;
}
