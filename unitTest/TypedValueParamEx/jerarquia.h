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
  //virtual void doSomething() = 0;
};


class Enteros : public Parent
{
public:
  
};

class Caracteres : public Parent
{
public:
  void doSomething()
  {
    cout << "Caracteres" << endl;
  }
};

class Booleanos : public Parent
{
public:
  void doSomething()
  {
    cout << "Booleanos" << endl;
  }
};
