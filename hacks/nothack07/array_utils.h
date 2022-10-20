//place your documentation and prototypes here

/**
 * Given and integer array and an integer 'x' determines if the array
 * contains 'x'. Returns true if 'x' is present in the array.
 */
int contains(const int *arr, int size, int x);

/**
 * given an integer 'x', determines if the array contains 'x' within the range
 * of the two provided indices 'i' and 'j' inclusively. Returns true if 'x' is
 * in range
 */
int containsWithin(const int *arr, int size, int x, int i, int j);

/**
 * given an array of integers, its size and a "new size" creates a new deep copy
 * of the array. However, instead of its original size, the new array should be
 * of the new size. If the new size is less than the old size, only the first
 * 'newSize' elements should be copied over. If the new size is greater than the
 * original size, then the new array should be padded out with zeros
 */
int * paddedCopy(const int *arr, int oldSize, int newSize);

/**
 * function that, given an array of integers and its size, reverses the elements
 * in the array
 */
void reverse(int *arr, int size);

/**
 * a function that creates and returns a new copy of the given array but with its
 * elements in reverse order.
 */
int * reverseCopy(const int *arr, int size);