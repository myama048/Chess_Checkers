#include "gtest/gtest.h"
#include "Bishop_test.hpp"
#include "Rook_test.hpp"
#include "Checker_test.hpp"
#include "King_test.hpp"
#include "Knight_test.hpp"
#include "Pawn_test.hpp"
#include "Queen_test.hpp"
#include "Gameplay_test.hpp"
#include "Checkers_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
