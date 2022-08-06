// Relational operators are <, >, <=, >=, == used mainly for comparisaon if condition satifies give 1 otherwise 0.

#include <iostream>

int main()
{
  int lessThan, greaterThan, lessThanEqual, greaterThanEqual, equalTo, number1, number2;
  std::cout<<"Enter two Number : "<<std::endl;
  std::cin>>number1>>number2;
  std::cout<<std::endl;
  
  lessThan = number1 < number2;
  greaterThan = number1 > number2;
  lessThanEqual = number1 <= number2; 
  greaterThanEqual = number1 >= number2;// gives quotient
  equalTo = number1 == number2; // gives remainder
  
  std::cout<<"Output: "<<std::endl;
  std::cout<<number1<<" < "<<number2<<" = "<<lessThan<<std::endl;
  std::cout<<number1<<" > "<<number2<<" = "<<greaterThan<<std::endl;
  std::cout<<number1<<" <= "<<number2<<" = "<<lessThanEqual<<std::endl;
  std::cout<<number1<<" >= "<<number2<<" = "<<greaterThanEqual<<std::endl;
  std::cout<<number1<<" == "<<number2<<" = "<<equalTo<<std::endl;  
  
  return 0;
}