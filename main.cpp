#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  char operador;
  float a, b;
  
  b!=0;

  cin >> operador >> a >> b;

  if(operador == '+') {
    cout << a + b << endl;
  }

  if(operador == '-') {
    cout << a - b << endl;
  }

  if(operador == '/') {
    cout << fixed << setprecision(1) << a / b << endl;
  }

  if(operador == '*') {
    cout << a * b << endl;
  }
 


  return 0;
}