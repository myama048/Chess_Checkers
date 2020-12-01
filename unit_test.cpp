#include "gtest/gtest.h"

#include "Gameplay_test.hpp"
#include "straightMove_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
