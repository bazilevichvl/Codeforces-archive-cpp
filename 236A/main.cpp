#include <iostream>
#include <string>

int main(void){
    bool letter_is_present[26];
    for(bool& l : letter_is_present){
        l = false;
    }

    std::string s;
    std::cin >> s;
    for(char c: s){
        letter_is_present[c - 97] = true;
    }

    int unique_chars = 0;
    for(int i = 0; i < 26; ++i){
        if(letter_is_present[i]){
            ++unique_chars;
        }
    }
    if(unique_chars % 2 == 0){
        std::cout << "CHAT WITH HER!";
    } else {
        std::cout << "IGNORE HIM!";
    }
    std::cout << std::endl;

    return 0;
}
