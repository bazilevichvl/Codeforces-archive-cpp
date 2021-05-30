#include <iostream>

int main(void){
    int l, b;
    std::cin >> l >> b;

    int years = 0;
    while(l <= b){
        l *= 3;
        b *= 2;
        ++years;
    }
    std::cout << years << std::endl;
    return 0;
}
