//
// Created by Viktor on 2019. 04. 25..
//
#include "gtest/gtest.h"
#include "anagram.h"

TEST(TestAnagram, FuneralAndRealFunAreAnagrams)
{
    std::string one = "funeral ";
    std::string two = "real fun";

    ASSERT_EQ(anagram(one, two), true);
}

TEST(TestAnagram, KeverAndElverAreNotAnagrams)
{
    std::string one = "kever";
    std::string two = "elver";

    ASSERT_EQ(anagram(one, two), false);
}
