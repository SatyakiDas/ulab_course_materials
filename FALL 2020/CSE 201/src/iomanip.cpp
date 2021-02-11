#include <iostream>
#include <iomanip>

int main () {
  double f =3.14159;

  std::cout << std::setprecision(6) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';

  std::cout << std::fixed;
  std::cout << std::setprecision(6) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';

  int a = 78;

  std::cout << std::setw(2) << std::setfill('0') << a << std::endl;
  std::cout << std::setw(3) << std::setfill('0') << a << std::endl;
  std::cout << std::setw(4) << std::setfill('0') << a << std::endl;

  return 0;
}
