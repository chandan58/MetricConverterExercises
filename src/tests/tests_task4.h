#ifndef TESTS_TASK4_H
#define TESTS_TASK4_H

#include "test_case.h"

void test_metres_to_millimetres() {
  double metres = 5;
  double actual = metres_to_millimetres(metres);
  double expected = 5000;
  assert("Metres to millimetres", actual, expected);
}

void test_millimetres_to_metres() {
  double millimetres = 180;
  double actual = millimetres_to_metres(millimetres);
  double expected = 0.18;
  assert("Millimetres to metres", actual, expected);
}

void test_kilometres_to_millimetres() {
  double kilometres = 0.007;
  double actual = kilometres_to_millimetres(kilometres);
  double expected = 7000;
  assert("Kilometres to millimetres", actual, expected);
}

void test_millimetres_to_kilometres() {
  double millimetres = 180;
  double actual = millimetres_to_kilometres(millimetres);
  double expected = 0.00018;
  assert("Millimetres to kilometres", actual, expected);
}

void test_kilometres_to_centimetres() {
  double kilometres = 0.007;
  double actual = kilometres_to_centimetres(kilometres);
  double expected = 700;
  assert("Kilometres to centimetres", actual, expected);
}

void test_centimetres_to_kilometres() {
  double centimetres = 350;
  double actual = centimetres_to_kilometres(centimetres);
  double expected = 0.0035;
  assert("Centimetres to kilometres", actual, expected);
}

#endif // TESTS_TASK4_H
