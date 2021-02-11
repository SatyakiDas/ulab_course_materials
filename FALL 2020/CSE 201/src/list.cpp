#include <iostream>
#include <iomanip>

int main () {
  double f =3.14159;
  std::cout << std::setprecision(6) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';

  std::cout << std::fixed;
  std::cout << std::setprecision(6) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';

  return 0;
}
