#include "gtest/gtest.h"
#include "Circle.h"
#include "DrawAllShapes.h"
#include "Shape.h"
#include "Square.h"
#include "Point.h"


TEST(CircleTest, Constructor) {
  Circle circle(5.0);
  EXPECT_EQ(circle.radius(), 5.0);
}

TEST(CircleTest1, Constructor) {
  Circle circle1(2.0);
  EXPECT_EQ(circle1.radius(), 2.0);
}

TEST(CircleTest2, Constructor) {
  Circle circle2(5.0);
  EXPECT_EQ(circle2.radius(), 5.0);
}