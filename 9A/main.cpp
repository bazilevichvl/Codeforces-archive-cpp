#include <iostream>

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a + b;
}

int main(void){
    int y, w;
    std::cin >> y >> w;
    int M = std::max(y, w);
    int higher_numbers = 7 - M;
    std::cout << higher_numbers / gcd(6, higher_numbers) << "/" << 6 / gcd(6, higher_numbers) << std::endl;
}
