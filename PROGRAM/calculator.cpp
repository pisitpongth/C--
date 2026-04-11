#include <iostream>
using namespace std;

int main() {
  char op;
  double num1, num2;

  cout << "\n********** CALCULATOR **********\n";

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Enter an operator: ";
  cin >> op;

  cout << "--------------------------------\n";

  if (op == '+') {
    cout << "Result: " << num1 << " " << op << " " << num2 << " = "
         << num1 + num2;
  } else if (op == '-') {
    cout << "Result: " << num1 << " " << op << " " << num2 << " = "
         << num1 - num2;
  } else if (op == '*' || op == 'x') {
    cout << "Result: " << num1 << " " << op << " " << num2 << " = "
         << num1 * num2;
  } else if (op == '/') {
    if (num2 == 0) {
      cout << "Error: Cannot divide by zero!";
    } else {
      cout << "Result: " << num1 << " " << op << " " << num2 << " = "
           << num1 / num2;
    }
  } else {
    cout << "That wasn't a valid operator";
  }

  cout << "\n********************************\n";

  return 0;
}