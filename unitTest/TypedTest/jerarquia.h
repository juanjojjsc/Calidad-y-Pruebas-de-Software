#include <iostream>
using namespace std;


using::testing::Range;
using::testing::Values;
using::testing::ValuesIn;
using::testing::Bool;
using::testing::Combine;


class Parent
{
public:
  virtual void doSomething() = 0;
};


class Child1 : public Parent
{
public:
  void doSomething()
  {
    cout << "Child1" << endl;
  }
};

class Child2 : public Parent
{
public:
  void doSomething()
  {
    cout << "Child2" << endl;
  }
};

class Child3 : public Parent
{
public:
  void doSomething()
  {
    cout << "Child3" << endl;
  }
};
