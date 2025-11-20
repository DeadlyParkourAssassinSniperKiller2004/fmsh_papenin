#include <iostream>
#include <string>
#include <vector>


std::string CommonPrefix(const std::vector<std::string>& words) {
    std::string a = "";
    std::string b = "";
    bool x = true;
    if (not words.empty()) {
        for (int c = 0; c < words[0].size(); c++) {
            b = words[0][c];
            for (int z = 0; z < words.size(); z++) {

            }
        }
        if (x) {
            a += b;
        } else {
        return a;
    }
}


int main() {
    std::vector<std::string> words{"apple", "apricot", "application"};
    std::cout << CommonPrefix(words);
}