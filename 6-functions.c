#include <math.h>
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int divide(int a, int b) {
  return a / b;
}

int divideDouble(double a, double b, double *remainder) {
  const double rem = fmod(a, b);
  printf("Rem: %f\n", rem);
  *remainder = fmodf(a, b);
  return a / b;
}

void main(void) {
  int a = 10;
  int b = 5;
  double c = 3.8;

  printf("The sum of %d and %d is %d\n", a, b, add(a, b));
  printf("The difference of %d and %d is %d\n", a, b, subtract(a, b));
  printf("The product of %d and %d is %d\n", a, b, multiply(a, b));
  printf("The quotient of %d and %d is %d\n", a, b, divide(a, b));

  double remainder;
  double *remainder_ptr = &remainder;

  int result = divideDouble(a, c, remainder_ptr);

  printf("Result: %d\n", result);
  printf("Remainder: %f\n", remainder);

  const double mantissa = remainder / c;
  printf("Mantissa: %f\n", mantissa);

}

