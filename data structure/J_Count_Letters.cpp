#include <iostream>
#include <string>
#include <map>

int main() {
    std::string S;
    std::cin >> S;

    // Create a map to store character counts
    std::map<char, int> charCount;

    // Count occurrences of each character
    for (char ch : S) {
        charCount[ch]++;
    }

    // Print the results in ascending order
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (charCount.find(ch) != charCount.end()) {
            std::cout << ch << " : " << charCount[ch] << std::endl;
        }
    }

    return 0;
}
