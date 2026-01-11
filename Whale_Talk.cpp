#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string input = "turpentine and turtles";
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {

            if (input[i] == vowels[j]) {
                // Add the vowel
                result.push_back(input[i]);

                // Double 'e' and 'u'
                if (input[i] == 'e' || input[i] == 'u') {
                    result.push_back(input[i]);
                }
            }
        }
    }

    // Print the result
    for (int k = 0; k < result.size(); k++) {
        std::cout << result[k];
    }

    std::cout << "\n";
}

