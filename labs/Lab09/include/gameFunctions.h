/**
 * Ryan Brown
 * 10/25/22
 * 
 * 
*/

/**
 * takes two arguments(int, string) and alters the string and sets
 * all characters to '_' and null-terminates it. The string returns
 * nothing
*/
void initializeBlankString(int lenght, char *string);

/**
 * prints a string with a space between each character.
 * Returns nothing
*/
void printWithSpaces(char *string);

/**
 * takes two strings and a character and returns an integer. The first
 * string is the soulution. The second string will be the revealed string.
 * The character is the letter guessed by the user. The function should
 * return 1 if the reveal string is modified and a 0 if it is not.
*/
int revealGuessedLetter(const char *solution, char *reveal, char guess);

/**
 * takes two strings and returns 1 if they are the same and 0 if they are
 * different
*/
int checkGuess(char *a, char *b);


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
