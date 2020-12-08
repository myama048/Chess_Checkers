#include "gtest/gtest.h"
//#include "straightMove_test.hpp"
//#include "sideMove_test.hpp"
//#include "diagonalMove_test.hpp"
#include "checkerMove_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
