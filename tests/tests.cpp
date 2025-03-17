#include <gtest/gtest.h>
#include "../classes/Triangle.h"

TEST(RightAngled, Constructor) {
  Triangle ra(3, 4, 5);
  ASSERT_EQ(ra.getPerimeter(), 12);
}