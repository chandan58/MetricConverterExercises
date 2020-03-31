#ifndef TEST_CASE_H
#define TEST_CASE_H

#include <stdio.h>
#include <math.h>
#include "../converter.h"

#define TOLERANCE 0.0001

typedef struct {
  char* name;
  double actual;
  double expected;
  int has_passed;
} TestCase;

void report(TestCase test) {
  printf("[%s] %s\n", (test.has_passed ? "yes" : "no"), test.name);

  if (!test.has_passed) {
    printf("\tExpected: %f\n", test.expected);
    printf("\tGot:\t  %f\n", test.actual);
  }
}

void assert(char* name, double actual, double expected) {
  TestCase test;
  test.name = name;
  test.actual = actual;
  test.expected = expected;
  test.has_passed = fabs(actual - expected) < TOLERANCE;

  report(test);
}

#endif // TEST_CASE_H
