#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> parents(n);
    for(int i = 1; i < n; ++i){
        int p;
        std::cin >> p;
        --p;
        parents[i] = p;
    }

    std::vector<int> path;
    path.push_back(n-1);
    int parent = parents[n-1];
    while(parent != 0){
        path.push_back(parent);
        parent = parents[parent];
    }
    path.push_back(0);
    std::reverse(path.begin(), path.end());

    for(int v : path){
        std::cout << v + 1 << " ";
    }
    std::cout << std::endl;
}
