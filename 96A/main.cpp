#include <iostream>
#include <string>

int main(void){
    std::string position;
    std::cin >> position;

    char last = position[0];
    int consequent = 1;
    bool dangerous = false;
    for(int i = 1; i < position.size(); ++i){
        char cur = position[i];
        if(cur == last){
            ++consequent;
        } else {
            last = cur;
            consequent = 1;
        }

        if(consequent == 7){
            dangerous = true;
            break;
        }
    }

    if(dangerous){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}
