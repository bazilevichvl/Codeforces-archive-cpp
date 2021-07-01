#include <iostream>
#include <vector>

int main(void){
    int n;
    std::cin >> n;

    std::vector<int> scores(n);
    for(int i = 0; i < n; ++i){
        int score;
        std::cin >> score;
        scores[i] = score;
    }

    int sliding_min, sliding_max;
    sliding_min = sliding_max = scores[0];
    int outstanding_count = 0;
    for(int i = 1; i < n; ++i){
        if(scores[i] > sliding_max){
            ++outstanding_count;
            sliding_max = scores[i];
        } else if(scores[i] < sliding_min){
            ++outstanding_count;
            sliding_min = scores[i];
        }
    }
    std::cout << outstanding_count << std::endl;
}
