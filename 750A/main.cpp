#include <iostream>

int main(void){
    int n, k;
    std::cin >> n >> k;
    int max_time = 240 - k;
    /* We should find t such that 5 + 10 + ... + 5t <= max_time */
    for(int i = 0; i <= n; ++i){
        int time = 5 * i * (i + 1) / 2;
        int rem = max_time - time;
        if(rem < 5 * (i+1) || i == n){
            std::cout << i << std::endl;
            break;
        }
    }
}
