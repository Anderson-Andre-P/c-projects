#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ATTEMPTS 6
#define MAX_WORD 20

struct HangmanGame
{
    char word[MAX_WORD];
    char hidden_word[MAX_WORD];
    char used_letters[26];
    int remaining_attempts;
};

void bootGame(struct HangmanGame *game, const char *word)
{
    strcpy(game->word, word);
    game->remaining_attempts = MAX_ATTEMPTS;
    int i;
    for (i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i]))
            game->hidden_word[i] = '_'; // Initialize the hidden word with '_'
        else
            game->hidden_word[i] = word[i]; // Keeps special characters visible
    }
    game->hidden_word[i] = '\0';
    for (i = 0; i < 26; i++)
        game->used_letters[i] = '\0'; // Initializes the vector of used letters
}

int letterAlreadyUsed(struct HangmanGame game, char letter)
{
    int i;
    for (i = 0; i < strlen(game.used_letters); i++)
    {
        if (game.used_letters[i] == letter)
            return 1;
    }
    return 0;
}

int checkLetter(struct HangmanGame *game, char letter)
{
    int i, encontrou = 0;
    for (i = 0; i < strlen(game->word); i++)
    {
        if (game->word[i] == letter)
        {
            game->hidden_word[i] = letter;
            encontrou = 1;
        }
    }
    if (!encontrou)
        game->remaining_attempts--;
    return encontrou;
}

void showGame(struct HangmanGame game)
{
    printf("word: %s\n", game.hidden_word);
    printf("Remaining attempts: %d\n", game.remaining_attempts);
    printf("Used letters: ");
    int i;
    for (i = 0; i < strlen(game.used_letters); i++)
        printf("%c ", game.used_letters[i]);
    printf("\n\n\n");
}

int main()
{
    struct HangmanGame game;
    const char *secretWord = "programming"; // Set secret word here

    bootGame(&game, secretWord);

    while (game.remaining_attempts > 0 && strcmp(game.word, game.hidden_word) != 0)
    {
        showGame(game);

        char letter;
        printf("Type a letter: ");
        scanf(" %c", &letter);

        letter = tolower(letter);

        if (!isalpha(letter))
        {
            printf("Please, type only letters of the alphabet.\n");
            continue;
        }

        if (letterAlreadyUsed(game, letter))
        {
            printf("Have you ever used this letter. Try again.\n");
            continue;
        }

        game.used_letters[strlen(game.used_letters)] = letter;
        game.used_letters[strlen(game.used_letters) + 1] = '\0';

        if (!checkLetter(&game, letter))
            printf("letter not found! Try again.\n");
    }

    if (strcmp(game.word, game.hidden_word) == 0)
        printf("Congratulations!!! You won!The word was: %s\n", game.word);
    else
        printf("Game over! The word was: %s\n", game.word);

    return 0;
}
