/**
 * Author: Chris Bourke
 * 
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */

#include<stdio.h>

int main() {

  double area, base, height;

  printf("Please enter the base of a triangle: ");

  scanf("%lf", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);

  area = 1.0/2.0 *base * height;

  printf("The area is %f square units.\n", area);

  return 0;
}
