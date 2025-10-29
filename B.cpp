#include <string>
#include <iostream>

std::string encrypt() {
    std::string s;
    int i;
    std::cin >> s;
    std::cin >> i;
    std::string s2 = "";
    for (int a = 0; a < s.length(); a++) {
        s2 += char(int(s[a]) + i);
    }
    return s2;
}

std::string decrypt() {
    std::string s;
    int i;
    std::cin >> s;
    std::cin >> i;
    std::string s2 = "";
    for (int a = 0; a < s.length(); a++) {
        s2 += char(int(s[a]) - i);
    }
    return s2;
}

int main() {
    std::cout << decrypt();
    std::cout << encrypt();
}

