/**
 * Ryan Brown
 * 10/26/22
 * 
 * dictionary for hack 9
 */

/**
 * replaces instances of a given character with a different character in
 * a string.
 */
void replaceChar(char *s, char oldChar, char newChar);

/**
 * takes a string and creates a new copy of it but with instances of a 
 * given character replaced with a different character.
 */
char * replaceCharCopy(const char *s, char oldChar, char newChar);

/**
 * takes a string and removes all instances of a certan character from it
 */
void removeChar(char *s, char c);

/**
 * takes a string and creates a new copy of it but with instances of a
 * specified character removed from it
 */
char * removeCharCopy(const char *s, char c);

/**
 * takes a string and spits it into an array of strings. The length of
 * each array is determined by 'n'
 */
char **lengthSplit(const char *s, int n);