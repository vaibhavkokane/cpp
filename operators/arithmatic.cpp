// arithmatic operator are addition (+), subtraction (-), division (/), multiplication (*), mod (%)

#include <iostream>

int main()
{
  int addition, subtraction, division, multiplication, mod, number1, number2;
  std::cout<<"Enter two Number : "<<std::endl;
  std::cin>>number1>>number2;

  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2; 
  division = number1 / number2;// gives quotient
  mod = number1 % number2; // gives remainder
  
  std::cout<<"Addition = "<<addition<<std::endl;
  std::cout<<"Subtraction = "<<subtraction<<std::endl;
  std::cout<<"Division = "<<division<<std::endl;
  std::cout<<"Multiplication = "<<multiplication<<std::endl;
  std::cout<<"Mod = "<<mod<<std::endl;  
  
  return 0;
}