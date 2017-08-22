#include  "gtest/gtest.h"
#include <iostream>
#include <fstream>


using namespace std;

using ::testing::EmptyTestEventListener;
using ::testing::TestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestPartResult;

class EventListener : public EmptyTestEventListener
{

public:
  ofstream outputFile;


  virtual void OnTestProgramStart(const UnitTest&)
  {
    printf("Bienvenido amigo\n");
    //outputFile << "Hola" << endl;

    outputFile.open("resultados.txt");
    outputFile << "Juan Jose Santos\n\n";
    outputFile << "Resultados\n\n";
    outputFile << "Iniciando Test\n";
  }


  virtual void OnTestProgramEnd(const UnitTest& ut)
  {
    outputFile << "Tests Correctos: ";
    outputFile << ut.successful_test_count() << endl;
    outputFile << "Tests Fallidos: ";
    outputFile << ut.failed_test_count() << endl;
    outputFile << "Tiempo Programa: ";
    outputFile << ut.elapsed_time() << " ms" << endl;
    outputFile.close();
  }


  //Solo se ejecuta el metodo cuando falla
  virtual void OnTestPartResult(const TestPartResult& tpr)
  {
    if (tpr.failed())
    {
      outputFile << "Fallo por:\n";
      outputFile << tpr.summary() << endl;
      outputFile << "Linea de error: ";
      outputFile << tpr.line_number() << endl;
    } else {
      outputFile << "Exito! No hay fallas\n";
    }
  }



  virtual void OnTestCaseStart(const testing::TestCase& tc)
  {
    outputFile << "Test Case: ";
    outputFile << tc.name() << "\n";
  }

  virtual void OnTestStart(const testing::TestInfo& ti)
  {
    outputFile << "Test Name: ";
    outputFile << ti.name() << "\n";
  }

  virtual void OnTestCaseEnd(const testing::TestCase& tc)
  {
    outputFile << "Tiempo Case: ";
    outputFile << tc.elapsed_time() << " ms" << endl;
  }




};

TEST(TestCaseUno, NombreTest)
{
  ASSERT_EQ(1,1);
  SUCCEED();
}

int main(int argc, char**argv)
{
  InitGoogleTest(&argc, argv);
  ::testing::TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
  //delete listeners.Release(listeners.default_result_printer());
  listeners.Append(new EventListener);
  return RUN_ALL_TESTS();
}
