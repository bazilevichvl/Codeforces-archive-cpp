#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int main(void){
    std::string start, target;
    std::cin >> start >> target;

    /* Compute Chebyshev distance */
    int dist = std::max(std::abs(start[0] - target[0]), std::abs(start[1] - target[1]));
    std::cout << dist << std::endl;

    /* Compute and pring diagonal steps */
    int diagonal = std::min(std::abs(start[0] - target[0]), std::abs(start[1] - target[1]));
    for(int i = 0; i < diagonal; ++i){
        if(start[0] < target[0]){
            std::cout << "R";
            ++start[0];
        } else {
            std::cout << "L";
            --start[0];
        }
        if(start[1] < target[1]){
            std::cout << "U";
            ++start[1];
        } else {
            std::cout << "D";
            --start[1];
        }
        std::cout << std::endl;
    }

    /* Reach target by moving in only one direction */
    for(int i = 0; i < dist - diagonal; ++i){
        if(start[0] < target[0]){
            std::cout << "R";
        } else if(start[0] > target[0]){
            std::cout << "L";
        }
        if(start[1] < target[1]){
            std::cout << "U";
        } else if(start[1] > target[1]){
            std::cout << "D";
        }
        std::cout << std::endl;
    }
}
