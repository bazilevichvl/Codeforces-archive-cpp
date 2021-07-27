#include <iostream>

int main(void){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i){
        int n;
        std::cin >> n;

        unsigned int a, b;
        a = 0;
        /* Idea in number a we will put the most heavy coin in nth bit of a remaining n/2 - 1 bits we will put to lower bits.*/
        a += 1<<n;
        for(int j = n / 2 - 1; j >= 0; --j){
            a += 1 << j;
        }

        b = ((1 << (n + 1)) - 1) ^ a ^ 1;
        std::cout << a - b << std::endl;
    }
}
