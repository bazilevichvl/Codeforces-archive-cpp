#include <iostream>

int main(void){
    int forces;
    std::cin >> forces;
    int dx = 0, dy = 0, dz = 0;
    for(int i = 0; i < forces; ++i){
        int fx, fy, fz;
        std::cin >> fx >> fy >> fz;
        dx += fx;
        dy += fy;
        dz += fz;
    }

    if(dx != 0 || dy != 0 || dz != 0){
        std::cout << "NO";
    } else {
        std::cout << "YES";
    }
    std::cout << std::endl;
}
