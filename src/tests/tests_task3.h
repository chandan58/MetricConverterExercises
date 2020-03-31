#ifndef TESTS_TASK3_H
#define TESTS_TASK3_H

#include "test_case.h"

void test_millimetres_to_centimetres() {
  double millimetres = 180;
  double actual = millimetres_to_centimetres(millimetres);
  double expected = 18;
  assert("Millimetres to centimetres", actual, expected);
}

void test_centimetres_to_metres() {
  double centimetres = 350;
  double actual = centimetres_to_metres(centimetres);
  double expected = 3.5;
  assert("Centimetres to metres", actual, expected);
}

void test_metres_to_kilometres() {
  double metres = 5;
  double actual = metres_to_kilometres(metres);
  double expected = 0.005;
  assert("Metres to kilometres", actual, expected);
}

#endif // TESTS_TASK3_H
