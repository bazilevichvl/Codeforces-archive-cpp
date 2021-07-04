#include <iostream>
#include <vector>

void read_direction(std::vector<int>& statuses, int n){
    for(int i = 0; i < n; ++i){
        int status;
        std::cin >> status;
        statuses[i] = status;
    }
   
}

int main(void){
    int n, s;
    std::cin >> n >> s;
    --s;
    std::vector<int> increasing(n);
    std::vector<int> decreasing(n);
    read_direction(increasing, n);
    read_direction(decreasing, n);

    /* Lets analyze simple cases */
    if(increasing[0] == 0){
        /* Case 1: Bob can't enter the station */
        std::cout << "No";
    } else if(increasing[s] == 0 && decreasing[s] == 0){
        /* Case 2: Can't leave on Alices's station */
        std::cout << "No";
    } else {
        if(increasing[s]){
            /* Case 3: Bob can enter the statition and move only on one metro branch */
            std::cout << "Yes";
        } else {
            /* We should check if there is some station, where Bob can change branch.
             * If such station exists then he can reach Alice*/
            bool reachable = false;
            for(int i = s + 1; i < n; ++i){
                std::cerr << i << std::endl;
                if(increasing[i] == 1 && decreasing[i] == 1){
                    reachable = true;
                }
            }
            if(reachable){
                std::cout << "Yes";
            } else {
                std::cout << "No";
            }
        }
    }
    std::cout << std::endl; 
}
