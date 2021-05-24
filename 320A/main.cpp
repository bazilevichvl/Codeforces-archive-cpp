#include <iostream>
#include <string>

bool is_prefix(std::string prefix, std::string word){
    return prefix == word.substr(0, prefix.size());
}

bool is_magic_number(std::string numb) {
    if(numb.size() == 0) {
        return true;
    } else if(is_prefix("144", numb)) {
        return is_magic_number(numb.substr(3));
    } else if(is_prefix("14", numb)) {
        return is_magic_number(numb.substr(2));
    } else if(is_prefix("1", numb)) {
        return is_magic_number(numb.substr(1));
    } else {
        return false;
    }
}

int main(void) {
    std::string numb;
    std::cin >> numb;
    
    if(is_magic_number(numb)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}
