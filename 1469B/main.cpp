#include <iostream>
#include <vector>

std::vector<int>* read_sequence(){
    int n;
    std::cin >> n;
    std::vector<int>* sequence = new std::vector<int>(n);
    for(int i = 0; i < n; ++i){
        int value;
        std::cin >> value;
        sequence->at(i) = value;
    }
    return sequence;
}

void solve_test(){
    std::vector<int>* red = read_sequence();
    std::vector<int>* blue = read_sequence();

    std::vector<std::vector<int>> dp(red->size() + 1);
    for(int i = 0; i < dp.size(); ++i){
        dp[i] = std::vector<int>(blue->size() + 1, -10000000);
    }
    dp[0][0] = 0;
    int answer = 0;
    for(int i = 0; i < red->size() + 1; ++i){
        for(int j = 0; j < blue->size() + 1; ++j){
            if(j < blue->size()){
                dp[i][j+1] = std::max(dp[i][j+1], dp[i][j] + (*blue)[j]);
            }
            if(i < red->size()){
                dp[i+1][j] = std::max(dp[i+1][j], dp[i][j] + (*red)[i]);
            }
            answer = std::max(answer, dp[i][j]);
        }
    }
    std::cout << answer << std::endl;

    delete blue;
    delete red;
}

int main(void){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i){
        solve_test();
    } 
}
