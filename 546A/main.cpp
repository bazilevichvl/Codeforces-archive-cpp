#include <iostream>

long long int get_banana_prices(int k, int w) {
    return static_cast<long long int>(k) * w * (w + 1) / 2;
}

int main(void) {
    int k, w;
    long long int n;
    std::cin >> k >> n >> w;

    long long int required_money = get_banana_prices(k, w) - n;
    if(required_money < 0){
        std::cout << 0;
    } else {
        std::cout << required_money;
    }
    std::cout << std::endl;
    return 0;
}
