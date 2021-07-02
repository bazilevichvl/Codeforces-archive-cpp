#include <iostream>

int main(void){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i){
        /* 
         *  Key idea: gcd(1, x - 1) = 1
         *  lcm(1, x - 1) = 1 * (x - 1) / gcd(1, x-1) = x - 1
         * */
        int x;
        std::cin >> x;
        std::cout << 1 << " " << x - 1 << std::endl;
    }
}
