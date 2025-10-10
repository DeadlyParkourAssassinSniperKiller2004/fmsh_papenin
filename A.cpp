#include <iostream>
#include <string>

std::pair <std::string, int> encrypt() {
    std::string s;
    int i;
    std::cin >> s;
    std::cin >> i;
    return std::make_pair(s, i);
}

std::string decrypt() {
    auto x = encrypt();
    for (int a = 0; a < x.first.length(); a++) {
        x.first[a] += x.second;
    }
    return x.first;
}