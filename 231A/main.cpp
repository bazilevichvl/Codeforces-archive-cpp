#include <iostream>
#include <vector>

int main(void) {
    int N;
    std::cin >> N;

    int solved_tasks = 0;
    for(int i = 0; i < N; ++i) {
        int p, v, t;
        std::cin >> p >> v >> t;
        int solutions = p + v + t;
        //std::cerr << p << ":" << v << ":" << t << std::endl;
        if(solutions >= 2) {
            ++solved_tasks;
        }
    }
    std::cout << solved_tasks << std::endl;
    return 0;
}
