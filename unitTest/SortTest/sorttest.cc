#include "gtest/gtest.h"
#include "jerarquiaS.h"

template <class T>
class Fixture : public ::testing::Test
{
public:
  void SetUp()
  {
    sort = new T;
  }

  void TearDown()
  {
    delete sort;
  }
    Sort* sort;
};


typedef ::testing::Types<Bubble, Insertion, Selection> implementations;
TYPED_TEST_CASE(Fixture, implementations);


TYPED_TEST(Fixture, implementations)
{
  this->sort->sort();
}
