#include <iostream>

/* Calculate how many cubes we should have to build a tower of height h */
int tower_cubes(int h){
    return h * (h + 1)  * (h+2) / 6;
}

int main(void){
    int N;
    std::cin >> N;
    int h = 1;
    while(tower_cubes(h) <= N){
        ++h;
    }
    std::cout << --h << std::endl;
    return 0;
}
