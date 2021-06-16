#include <iostream>

int main(void){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i){
        int a, b;
        std::cin >> a >> b;
        int rem = a % b;

        std::cout << (b - rem) % b << std::endl;
    }
    return 0;
}
