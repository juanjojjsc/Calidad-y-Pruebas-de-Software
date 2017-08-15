#include "gtest/gtest.h"
#include "primos.h"

TEST(TestCaseName, Positivos)
{
	while(1==1)
  {
    for (int i =0; i<20; i++)
    {
      EXPECT_TRUE(isPrime(i));
    }
  }
}
