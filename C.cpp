#include <iostream>



int main() {
    double x[3] = {1, 2, 3};
    double *s = x;
    std::cout << *(s + 2);
}
