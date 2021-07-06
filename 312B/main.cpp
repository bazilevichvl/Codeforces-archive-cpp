#include <iostream>

int main(void){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (double)(a * d) / (b * d - (b - a) *(d - c)) << std::endl;
}
