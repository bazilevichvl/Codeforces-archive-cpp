#include <iostream>
#include <string>
#include <cstring>

int main(void){
    std::string s;
    std::cin >> s;
    std::cout << static_cast<char>(std::toupper(s[0])) << s.substr(1, s.length()) << std::endl;
}
