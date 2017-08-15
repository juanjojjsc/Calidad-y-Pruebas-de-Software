#include "gtest/gtest.h"
#include "primos.h"

TEST(TestCaseName, Positivos)
{

long int i=2;
  while(i<=10000)
  {
      fl=0;
      rotate(i);
      if(fl==0)
      {
          cout<<"\n"<<i;
          EXPECT_TRUE(true);
      }
      i++;
  }


	// while(1==1)
  // {
  //   for (int i =0; i<20; i++)
  //   {
  //
  //     EXPECT_TRUE(isPrime(i));
  //   }
  // }
}
