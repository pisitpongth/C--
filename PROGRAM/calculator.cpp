#include <iostream>
using namespace std;

int main() {
  char op;
  double firstNumber;
  double secondNumber;
  double result;

  cout << "********** CALCULATOR **********" << "\n";

  cout << "Enter first number: ";
  cin >> firstNumber;

  cout << "Enter second number: ";
  cin >> secondNumber;

  cout << "Enter an operation: ";
  cin >> op;

  switch (op) {
    case '+':
      result = firstNumber + secondNumber;
      cout << "The Result of " << firstNumber << " + " << secondNumber << " = "
           << result << "\n";
      break;
    case '-':
      result = firstNumber - secondNumber;
      cout << "The Result of " << firstNumber << " - " << secondNumber << " = "
           << result << "\n";
      break;
    case 'x':
      result = firstNumber * secondNumber;
      cout << "The Result of " << firstNumber << " x " << secondNumber << " = "
           << result << "\n";
      break;
    case '/':
      if (secondNumber == 0 && op == '/') {
        cout << "You can not divide by zero!" << "\n";
      } else {
        result = firstNumber / secondNumber;
        cout << "The Result of " << firstNumber << " / " << secondNumber
             << " = " << result << "\n";
      }
      break;
    default:
      cout << "That wasn't a valid operator" << "\n";
      break;
  }
  cout << "********************************";

  return 0;
}