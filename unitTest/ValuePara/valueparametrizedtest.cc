#include "gtest/gtest.h"
#include <iostream>
#include "valueparametrizedtest.h"

using::testing::Range;
using::testing::Values;
using::testing::ValuesIn;
using::testing::Bool;
using::testing::Combine;

class Fixture : public ::testing::TestWithParam<int>
{
};

class Chars : public ::testing::TestWithParam<char>
{
};

class Bools : public ::testing::TestWithParam<bool>
{
};

class Combinations : public ::testing::TestWithParam< ::testing::tuple<int,int> >
{
public:
  int value1 = ::testing::get<0>(GetParam());
  int value2 = ::testing::get<1>(GetParam());


};


TEST_P(Combinations, testC)
{
  printValues(value1,value2);
}

TEST_P(Fixture, test)
{
  printValue(GetParam());
}

TEST_P(Chars, testC)
{
  printValue(GetParam());
}

TEST_P(Bools, testB)
{
  printValue(GetParam());
}


INSTANTIATE_TEST_CASE_P(enteros, Fixture, Values(1,2,3,4,5));

char a[5] = {'a','e','i','o','u'};

INSTANTIATE_TEST_CASE_P(caracteres, Chars, ValuesIn(a));
INSTANTIATE_TEST_CASE_P(booleanos, Bools, Bool());
INSTANTIATE_TEST_CASE_P(combinacion, Combinations, Combine(Range(1,10,1),
Range(1,10,1)));
