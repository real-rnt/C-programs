#include <stdio.h>

double power(double base, double power) {
  double result = 1.0;
  for (int i = 0; i < power; i++) {
    result *= base;
  }
  return result;
}

/*unsigned long long factorial(double factorialNumber) {*/
/*  unsigned long long result = 1.0; */
/*  for (int i = 0; i <= factorialNumber; i++) {*/
/*    result *= i;*/
/*  }*/
/*  return result;*/
/*}*/

int main(){
  char operator;
  double firstNumber;
  double secondNumber;
  double result;

  printf("Select your god damn operation:\nAddition => '+'\nSubtraction => '-'\nMultiplication => '*'\nDivision => '/'\nPower => 'p'\n");
  scanf("%s", &operator);

  printf("Select a number for the operation:\n");
  scanf("%lf", &firstNumber);

  printf("Select the second number of the operation:\n");
  scanf("%lf", &secondNumber);

  printf("Calculating...\n");

  if (operator == '+') {
    result = firstNumber + secondNumber;
    printf("%.2lf + %.2lf = %.2lf\n\n", firstNumber, secondNumber, result); 
  } else if (operator == '-') {
    result = firstNumber - secondNumber;
    printf("%.2lf - %.2lf = %.2lf\n\n", firstNumber, secondNumber, result);
  } else if (operator == '*') {
    result = firstNumber * secondNumber;
    printf("%.2lf * %.2lf = %.2lf\n\n", firstNumber, secondNumber, result);
  } else if (operator == '/') {
    result = firstNumber / secondNumber;
    printf("%.2lf / %.2lf = %.2lf\n\n", firstNumber, secondNumber, result);
  } else if (operator == 'p') {
    result = power(firstNumber, secondNumber);
    printf("%.2lf power %.2lf = %.2lf\n\n", firstNumber, secondNumber, result);
  } else {
    printf("hold on, invalid operation.\n");
  }
}
