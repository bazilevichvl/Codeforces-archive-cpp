#include <iostream>
#include <vector>
#include <algorithm>

struct Dragon {
    int health, strength_gain;
};

int main(void){
    int s, n;
    std::cin >> s >> n;
    std::vector<Dragon> dragons;
    dragons.reserve(n);
    for(int i = 0; i < n; ++i){
        int hp, str_gain;
        std::cin >> hp >> str_gain;
        dragons.push_back({hp, str_gain});
    }

    std::sort(dragons.begin(), dragons.end(), [](const Dragon& d1, const Dragon& d2){return d1.health < d2.health;});

    bool wins = true;
    for(int i = 0; i < n; ++i){
        if(s > dragons[i].health){
            s+= dragons[i].strength_gain;
        } else {
            wins = false;
            break;
        }
    }

    if(wins){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
}
