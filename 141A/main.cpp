#include <iostream>
#include <string>
#include <vector>
int main(void){
    std::string guest, host, letters;
    std::cin >> guest >> host >> letters;

    std::vector<int> chars(26, 0);
    for(char c : guest){
        ++chars[c - 65];
    }
    for(char c : host){
        ++chars[c - 65];
    }

    for(char c : letters){
        --chars[c - 65];
    }

    bool possible = true;
    for(int i : chars){
        if(i != 0){
            possible = false;
            break;
        }
    }

    if(possible){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
}
