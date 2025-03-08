//
// Created by slugm on 08/03/2025.
//
#include <stdio.h>

void main(void) {
  int a;

  int *pointer = &a;

  // assign the variable
  a = 5;
  printf("The value of a is %d\n", a);

  // assign to the pointer
  *pointer = 6;

  printf("The value of a is now %d\n", a);

  printf("The value of *pointer is %d\n", pointer);

  printf("It stores the value %d\n", *pointer);
  printf("The address of a is %d\n", &a);

  long intval = 25;
  void *voidptr = &intval;

  printf("The int value is %d\n", *(int *) voidptr);
  printf("The char value is %d\n", *(char *) voidptr);
  printf("The long value is %d\n", *(long *) voidptr);
}