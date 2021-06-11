#include "pch.h"
#include "Arithmetic.h"

TEST(TestingIntSquare, Test1) {
  EXPECT_EQ(Arithmetic::intSquare(100), 10000);
  EXPECT_TRUE(true);
}