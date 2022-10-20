/**
 * Ryan Brown
 * 10/20/22
 * 
 * code for midterm exam
*/

/**
 * updates volume and weight based on radius and height. Returns 0 for no errors.
 */
int getCornStats(double radius, double height, double *volume, double *weight);

/**
 * if any number in an array is divisible by 3, add 1 to 'huskerTotal'. If any number
 * in an array is divisible by 5, add 1 to 'mavTotal'.
 */
int fizzBuzzSum(const int *arr, int n, int *huskerTotal, int *mavTota);

/**
 * takes array 'a' and array 'b' and merges them into a new array
 */
int *merge(const int *a, int n, const int *b, int m);

/**
 * This function has been provided for you
 */
void printArray(const int *arr, int n);
