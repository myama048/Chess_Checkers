#include "gtest/gtest.h"
#include "Bishop_test.hpp"
#include "Gameplay_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
