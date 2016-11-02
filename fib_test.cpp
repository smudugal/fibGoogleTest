#include "gtest/gtest.h"
#include "fib.h"

TEST(Fibonacci, Zero){
    EXPECT_EQ(0, fibonacci(0));
}

TEST(Fibonacci, one_two){
    EXPECT_EQ(0, fibonacci(1));
    EXPECT_EQ(1, fibonacci(2));
}

TEST(Fibonacci, Negative){
    EXPECT_EQ(0, fibonacci(-1));
}

TEST(Fibonacci, Positive){
    EXPECT_EQ(55, fibonacci(10));
    EXPECT_EQ(233, fibonacci(13));
}
