#include<stdio.h>

void swap(int a, int b)
{
  // create a temporary variable to hold one of the values to perform the swap
    int tempVariable;

  tempVariable = a;  /* temporarily save the value of the first variable */
  a=b;  /* swap the vale of the first variable with the value of the second variable */
  b= tempVariable;  /* put the value of the first variable into the second variable */

    printf("value of a: %d \n", a);
    printf("value of b: %d \n", b);

    return;
}

int main(void)
{
    int a = 100;
    int b = 200;

    printf("before swap: value of a: %d \n", a);
    printf("before swap: value of b: %d \n", b);

  // call function to swap values
    swap(a, b);

  // check values outside the function after swap function is run
    printf("after swap: value of a: %d \n", a);
    printf("after swap: value of b: %d \n", b);

    return 0;

}