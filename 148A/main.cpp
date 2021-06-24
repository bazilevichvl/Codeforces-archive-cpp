#include <iostream>

int main(void){
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;
    
    int beaten_dragons = 0;
    for(int i = 1; i <= d; ++i){
        if(i % k == 0 || i % l == 0 || i % m == 0|| i % n == 0){
            ++beaten_dragons;
        }
    }
    std::cout << beaten_dragons << std::endl;
}
