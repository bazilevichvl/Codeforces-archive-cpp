#include <iostream>

int main(void){
    int tests;
    std::cin >> tests;
    for(int t = 0; t < tests; ++t){
        long long int n;
        std::cin >> n;

        if((n & (n - 1)) == 0){
            std::cout << "NO";
        } else {
            std::cout << "YES";
        }

        std::cout << std::endl;
    }
    return 0;
}
