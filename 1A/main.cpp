#include <iostream>

int main(void){
    long long int n, m, a;
    std::cin >> n >> m >> a;
    long long int width = n / a + ((n % a) > 0 ? 1 : 0);
    long long int height = m / a + ((m % a) > 0 ? 1 : 0);
    std::cout << width * height << std::endl;
    return 0;
}
