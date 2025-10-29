#include <string>
#include <iostream>

std::string encrypt() {
    std::string s;
    std::string i;
    std::cin >> s;
    std::cin >> i;
    std::string s2 = "";
    std::string s3 = "";
    while (s2.length() < s.length()) {
        s2 += i;
    }
    for (int a = 0; a < s.length(); a++) {
        s3 += s2[a] ^ s[a];
    }
    return s3;
}

int main() {
    std::cout << encrypt();
}