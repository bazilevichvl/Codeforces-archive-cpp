#include <iostream>
#include <string>

bool prints(const std::string& program) {
    for(char c : program){
        switch(c) {
            case 'H':
            case 'Q':
            case '9':
                return true;
        }
    }
    return false;
}

int main(void) {
    std::string program;
    std::cin >> program;

    if(prints(program)){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}
