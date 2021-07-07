#include <iostream>
#include <string>
#include <vector>

int count_jumps(std::string map, int d){
    /* Store number of jumps from each cell to the last one 
     * -1 means that this distance is not defined */
    std::vector<int> jumps(map.length(), -1);

    /* We know in advance that it takes 0 jumps to reach finish from finish */
    jumps[map.length() - 1] = 0;
    for(int i = map.length() - 2; i > -1; --i){
        /* If there is no flower - skip */
        if(map[i] == '0'){
            continue;
        }

        /* Find valid neighbour which has shortest distance(in jumps) to finish */
        int min_to_finish = 1000;
        bool updated = false;
        for(int j = d; j > 0; --j){
            /*If we are outside of the map or there is no flower or distance is not defined */
            if(i + j >= map.length() || map[i + j] == '0' || jumps[i+j] == -1){
                continue;
            }
            if(jumps[i + j] < min_to_finish){
                min_to_finish = jumps[i + j];
                updated = true;
            }
        }
        if(updated){
            jumps[i] = min_to_finish + 1;
        }
    }
    return jumps[0];
}

int main(void){
    int n, d;
    std::cin >> n >> d;
    std::string s;
    std::cin >> s;

    int total_jumps = count_jumps(s, d);
    std::cout << total_jumps << std::endl;
}
