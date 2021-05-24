#include <iostream>
#include <vector>

std::vector<int> find_presenters(std::vector<int> gifts, int n){
    std::vector<int> presenters(n, 0);
    for(int i = 0; i < n; ++i) {
        int id = gifts[i];
        presenters[id-1] = i+1;
    }
    return presenters;
}

int main(void) {
    int n;
    std::cin >> n;
    std::vector<int> gifts(n, 0);

    for(int i = 0; i < n; ++i){
        int friend_id;
        std::cin >> friend_id;
        gifts[i]  = friend_id;
    }

    std::vector<int> presenters = find_presenters(gifts, n);
    for(int p : presenters){
        std::cout << p <<  " ";
    }
    std::cout << std::endl;

    return 0;
}
