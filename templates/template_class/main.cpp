#include <iostream>

using namespace std;

template <typename T>

class calc
{
public:
  T Add(T a, T b) { return a + b; }
  T Sub(T a, T b) { return a - b; }
  T Mult(T a, T b) { return a * b; }
  T Divide(T a, T b)
  {
    if (b == 0)
    {
      cout << "Error!!!!\n";
      return 0;
    }
    else
    {
      return a / b;
    }
  }
};

int main(void)
{

  calc<int> Intcalc;

  cout << Intcalc.Add(5, 2) << '\n'
      << Intcalc.Sub(5, 2) << '\n'
      << Intcalc.Divide(5, 1) << '\n';

  calc<float> Floatcalc;

  cout << Floatcalc.Add(1.2f, 1.2f) << '\n'
      << Floatcalc.Sub(10.5f, 0.5f) << '\n'
      << Floatcalc.Mult(3, 2);

  return 0;
}