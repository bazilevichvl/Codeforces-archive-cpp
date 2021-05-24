#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int N;
    std::cin >> N;
    std::vector<int> columns;
    for(int i = 0; i < N; ++i){
        int c;
        std::cin >> c;
        columns.push_back(c);
    }
    std::sort(columns.begin(), columns.end());
    for(int c : columns) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    return 0;
}
