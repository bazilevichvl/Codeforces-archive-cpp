#include <iostream>

int factor_multiplicity(int n, int factor){
    int multiplicity = 0;
    while(n % factor == 0){
        n /= factor;
        ++multiplicity;
    }
    return multiplicity;
}

int main(void){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i){
        int n; 
        std::cin >> n;
        int mult2 = factor_multiplicity(n, 2);
        int mult3 = factor_multiplicity(n, 3);
        if(mult3 < mult2){
            std::cout << -1 << std::endl;
        } else {
            int estimated_ops = 2 * mult3 - mult2;

            for(int j = 0; j < estimated_ops; ++j){
                if(n % 6 == 0){
                    n /= 6;
                } else {
                    n *= 2;
                }
            }

            if(n == 1){
                std::cout << estimated_ops << std::endl;
            } else {
                std::cout << -1 << std::endl;
            }
        }
    }
}
