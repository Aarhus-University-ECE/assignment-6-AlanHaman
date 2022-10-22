#include <stdio.h>
#include <assert.h>

// Excercise 2
 /*
Function that finds the maximum value in the array
*/

// defining the function as described in the task
int max(int *numbers, int size) {
  assert(size > 0); // assert that that the array is not empty

  int max_value = *numbers; // max_value equal to the first element in the array

  // for loop to check if the next number in the array is bigger then the
  // previous one
  for (int j = 0; j < size; j++) {
    if (max_value < *(numbers + j)) {
      max_value = *(numbers + j);
    }
  }
  return max_value;

  }
