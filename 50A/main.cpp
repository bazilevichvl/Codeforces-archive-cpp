#include <iostream>

int main(void){
    int m, n;
    std::cin >> m >> n;

    int blocks = (m * n) / 2;
    std::cout << blocks << std::endl;
}
