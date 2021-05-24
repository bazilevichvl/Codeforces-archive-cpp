#include <iostream>

int main(void) {
    long long int n;
    std::cin >> n;
    long long int l = n / 2;
    long long int u = n / 2 + n % 2;
    long long int s_p = l * (l + 1);
    long long int s_n = u * u;

    std::cerr << "U: " << u << " L: " << l << std::endl;
    std::cerr << "S_p: " << s_p << " S_n: " << s_n << std::endl;

    std::cout << s_p - s_n << std::endl;
    return 0;
}
