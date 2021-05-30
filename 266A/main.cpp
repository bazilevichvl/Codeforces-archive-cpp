#include <iostream>

int main(void){
    int n;
    std::cin >> n;

    char prev = 0;
    char cur;
    int to_remove = 0;
    for(int i = 0; i < n; ++i){
        std::cin >> cur;
        if(prev == cur){
            ++to_remove;
        }
        prev = cur;
    }
    std::cout << to_remove << std::endl;
}
