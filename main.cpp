#include <iostream>
#include <string>
#include <vector>
#include <istream>



std::pair <std::string, int> encrypt() {
    int i;
    std::vector<std::string> v;
    std::cin >> v;
    std::cin >> i;
    return std::make_pair(v, i);
}

std::string decrypt() {

    auto x = encrypt();
    for (int a = 0; a < x.first.length(); a++) {
        x.first[a] = x.first[a] + x.second;
    }
    return x.first;
}
int main() {
    std::cout << decrypt();
}
