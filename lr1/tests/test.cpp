#include <gtest/gtest.h>
#include "function.hpp"

TEST(CountDays, ExampleFromStatement) {
    EXPECT_EQ(CountDays(100, 10, 910), 10);
}

TEST(CountDays, ReachedExactlyDayOne) {
    EXPECT_EQ(CountDays(5, 1, 5), 1);
}

TEST(CountDays, ReachedBeforeNight) {
    EXPECT_EQ(CountDays(10, 9, 11), 2);
}

TEST(CountDays, ZeroGoal) {
    EXPECT_EQ(CountDays(5, 1, 0), 0);
}

TEST(CountDays, ImpossibleGoal) {
    EXPECT_EQ(CountDays(3, 3, 10), -1);
    EXPECT_EQ(CountDays(2, 5, 100), -1);
}