#ifndef TESTS_TASK2_H
#define TESTS_TASK2_H

#include "test_case.h"

void test_centimetres_to_millimetres() {
  double centimetres = 350;
  double actual = centimetres_to_millimetres(centimetres);
  double expected = 3500;
  assert("Centimetres to millimetres", actual, expected);
}

void test_metres_to_centimetres() {
  double metres = 5;
  double actual = metres_to_centimetres(metres);
  double expected = 500;
  assert("Metres to centimetres", actual, expected);
}

void test_kilometres_to_metres() {
  double kilometres = 0.007;
  double actual = kilometres_to_metres(kilometres);
  double expected = 7;
  assert("Kilometres to metres", actual, expected);
}

#endif // TESTS_TASK2_H
