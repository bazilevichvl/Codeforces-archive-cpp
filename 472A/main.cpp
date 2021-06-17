#include <iostream>
#include <cmath>

bool is_prime(int n){
    int search_bound = static_cast<int>(std::sqrt(n));
    for(int i = 2; i <= search_bound; ++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(void){
    int n;
    std::cin >> n;

    int n1, n2;
    for(n1 = 4; n1 < n; ++n1){
        n2 = n - n1;
        if(!is_prime(n1) && !is_prime(n2)){
            break;
        }
    }
    std::cout << n1 << " " << n2 << std::endl;
    return 0;
}
