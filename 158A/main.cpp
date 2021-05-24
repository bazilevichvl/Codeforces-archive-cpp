#include <iostream>

int main(void){
    int n, k;
    std::cin >> n >> k;
    int k_score = -1;
    int passed = 0;
    for(int i = 0; i < n; ++i){
        int score;
        std::cin >> score;
        if(i == k - 1){
            k_score = score;
        }
        if(k_score == -1 && score > 0){
            ++passed;
        } else if(score == k_score && score > 0){
            ++passed;
        }
    } 

    std::cout << passed << std::endl;
    return 0;
}
