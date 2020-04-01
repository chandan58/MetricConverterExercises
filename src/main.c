 #include "tests/tests_task2.h"
 #include "tests/tests_task3.h"
 #include "tests/tests_task4.h"

int main() {
  /* Task 2 */

   test_centimetres_to_millimetres();
   test_metres_to_centimetres();
   test_kilometres_to_metres();

  /* Task 3 */

   test_millimetres_to_centimetres();
   test_centimetres_to_metres();
   test_metres_to_kilometres();

  /* Task 4 */

  test_metres_to_millimetres();
  test_millimetres_to_metres();
  test_kilometres_to_millimetres();
  test_millimetres_to_kilometres();
  // test_kilometres_to_centimetres();
  // test_centimetres_to_kilometres();
}
