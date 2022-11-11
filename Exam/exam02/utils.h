/**
 * Ryan Brown
 * 11/10/22
 *
 * A collection of utility functions used for Exam 2
 */


/**
 * Returns a deep copy of the given string
 */
char * deepStringCopy(const char *str);

/**
 * If points are divisible by three add points to mavricks. If points are divisible by 5
 * add points to huskers. If points are divisible by both 3 and 5 add point to both teams.
 */
void score(int points, int *team1, int *team2);


/**
 * reverses the order characters in a string
 */
char *revString(char *string);

/**
 * finds the number of line in a file
 */
int numberOfLines(FILE *input);