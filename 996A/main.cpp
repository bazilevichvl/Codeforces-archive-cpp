#include <cstdlib>
#include <iostream>
#include <vector>

/* Official solution uses greedy approach */

int get_denomination(int i){
    switch(i) {
        case 0: return 1;
        case 1: return 5;
        case 2: return 10;
        case 3: return 20;
        case 4: return 100;
        default: {
            std::cerr << "Unknown denomination" << std::endl;
            exit(-1);
        }
    }
}

int main(void){
    /* It's possible to solve the same problem using just one array */
    std::vector<std::vector<int>> solutions;
    int n;
    std::cin >> n;
    for(int i = 0; i < 5; ++i){
        std::vector<int> denomination;
        if(i == 0){
            denomination.push_back(n);
        } else {
            denomination.push_back(0);
        }
        solutions.push_back(denomination);
    }

    bool changed = true;
    while(changed){
        changed = false;

        for(int i = 0; i < 4; ++i){
            /* get current amount of bonds with given denomination */
            int number_of_bonds = solutions.at(i).back();
            int current_denomination = get_denomination(i);
            int next_denomination = get_denomination(i+1);
            if(current_denomination * number_of_bonds >= next_denomination){
                int added_bonds = (current_denomination * number_of_bonds) / next_denomination;
                int remaining_bonds = (current_denomination * number_of_bonds) % next_denomination / current_denomination;
                solutions.at(i).push_back(remaining_bonds);
                solutions.at(i+1).back() += added_bonds;
                changed = true;
            } else {
                solutions.at(i).push_back(number_of_bonds);
            }
            
        }
        /* copy last value */
        solutions.at(4).push_back(solutions.at(4).back());
    }

    int total = 0;
    for(int i = 0; i < 5; ++i){
        total += solutions.at(i).back();
    }
    std::cout << total << std::endl;
}
