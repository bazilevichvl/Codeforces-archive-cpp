#include <iostream>
#include <cmath>

double max_cdf(int m, int n, int x){
    return std::pow(static_cast<float>(x) / m, n);
}

int main(void){
    int m, n;
    std::cin >> m >> n;
    double ev = 0.0;
    for(int i = 1; i <= m; ++i){
        ev += i * (max_cdf(m, n, i) - max_cdf(m, n, i - 1));
    }
    std::cout << ev << std::endl;
}
