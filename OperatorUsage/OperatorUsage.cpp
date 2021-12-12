#include <iostream>
using namespace std;

class OperatorClass
{
public:
  int firstVariable, secondVariable;
  OperatorClass(){};
  OperatorClass(int, int);
  OperatorClass operator-(OperatorClass);
  OperatorClass operator+(OperatorClass);
  OperatorClass operator*(OperatorClass);
  OperatorClass operator/(OperatorClass);
};

OperatorClass::OperatorClass(int param1, int param2)
{
  firstVariable = param1;
  secondVariable = param2;
}

OperatorClass OperatorClass::operator-(OperatorClass param)
{
  OperatorClass temp;
  temp.firstVariable = firstVariable - param.firstVariable;
  temp.secondVariable = secondVariable - param.secondVariable;
  return (temp);
}

OperatorClass OperatorClass::operator+(OperatorClass param)
{
  OperatorClass temp;
  temp.firstVariable = firstVariable + param.firstVariable;
  temp.secondVariable = secondVariable + param.secondVariable;
  return (temp);
}
OperatorClass OperatorClass::operator*(OperatorClass param)
{
  OperatorClass temp;
  temp.firstVariable = firstVariable * param.firstVariable;
  temp.secondVariable = secondVariable * param.secondVariable;
  return (temp);
}
OperatorClass OperatorClass::operator/(OperatorClass param)
{
  OperatorClass temp;
  temp.firstVariable = firstVariable / param.firstVariable;
  temp.secondVariable = secondVariable / param.secondVariable;
  return (temp);
}

int main()
{
  OperatorClass firstClass(10, 6);
  OperatorClass secondClass(2, 2);
  OperatorClass thirdClass(1, 1);
  OperatorClass sumOfValue;
  sumOfValue = firstClass / secondClass - thirdClass;
  cout << firstClass.firstVariable << "," << firstClass.secondVariable << endl;
  cout << secondClass.firstVariable << "," << secondClass.secondVariable << endl;
  cout << thirdClass.firstVariable << "," << thirdClass.secondVariable << endl;
  cout << sumOfValue.firstVariable << "," << sumOfValue.secondVariable << endl;

  return 0;
}