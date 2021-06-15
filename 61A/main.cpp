#include <iostream>
#include <string>

int main(void){
    std::string a, b;
    std::cin >> a >> b;
    for(int i = 0; i < a.length(); ++i){
        if(a[i] == b[i]){
            std::cout << 0;
        } else {
            std::cout << 1;
        }
    }
    std::cout << std::endl;
    return 0;
}
