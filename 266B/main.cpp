#include <iostream>
#include <string>

void update_queue(std::string& queue, int t, int n){
    for(int i = 0; i < t; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(queue[j] == 'B' && queue[j+1] == 'G'){
                queue[j] = 'G';
                queue[j+1] = 'B';
                ++j;
            }
        }
        std::cerr << "upd: " << queue << std::endl;
    }
}

int main(void) {
    int n, t;
    std::cin >> n >> t;
    std::string queue;
    std::cin >> queue;

    update_queue(queue, t, n);

    std::cout << queue << std::endl;
    return 0;
}
