#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    // Main idea of the solution:
    // We have to maximize number of summands
    // Two minimal prime numbers - 2 and 3
    // Any number greater than 1 can be represented as a linear combination of this two numbers
    //
    // n = 2 * p + 3 * q
    //
    // where p - number of twos
    //       q - number of threes
    
    int twos = n / 2;
    int threes = 0;
    if( n % 2 == 1) {
        --twos;
        ++threes;
    }

    std::cout << twos + threes << std::endl;
    for(int i = 0; i < twos; ++i){
        std::cout << 2 << " ";
    }
    for(int i = 0; i < threes; ++i){
        std::cout << 3 << " ";
    }
    std::cout << std::endl;
    return 0;
}
