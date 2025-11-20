#include <iostream>



int main() {
    double x[3] = {1, 2, 3};
    double* s = &x[0];
//   std::cout << s;
    std::cout << *s;
    std::cout << *(s + 2);
}
