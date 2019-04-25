//
// Created by Viktor on 2019. 04. 25..
//

#include "gtest/gtest.h"
#include "sum.h"

TEST(TestSum, SumIsCorrect)
{
std::vector<int> myVector = {6, 7, 8, 9};

    ASSERT_EQ(sum(myVector),30);
}