#include <iostream>

int main(void){
    int n, m;
    std::cin >> n >> m;
    long long int path_length = 0;
    int current_pos = 1;
    for(int i = 1; i <= m; ++i){
        int destination;
        std::cin >> destination;
        if(destination >= current_pos){
            path_length += destination - current_pos;
        } else {
            path_length += n - current_pos + destination;
        }
        current_pos = destination;
    }
    std::cout << path_length << std::endl;
}
