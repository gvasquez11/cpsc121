#include <iostream>

int main()
{

  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  if(num % 2 == 0)
  std::cout << "Your number is even!" << std::endl;
  else
  std::cout << "Your number is odd!" << std::endl;



  return 0;
}
