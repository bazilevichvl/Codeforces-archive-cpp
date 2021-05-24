#include <iostream>

int get_max_steps(int distance, int step_size){
    return distance / step_size;
}

int main(void){
    // Greedy algo
    int x;
    std::cin >> x;
    int total_steps = 0;
    for(int step_size = 5; step_size > 0 && x > 0; --step_size){
        int steps = get_max_steps(x, step_size);
        //std::cerr << x << " " << step_size << " " << steps << std::endl;
        total_steps += steps;
        x -= steps * step_size;
    }
    std::cout << total_steps << std::endl;
    return 0;
}
