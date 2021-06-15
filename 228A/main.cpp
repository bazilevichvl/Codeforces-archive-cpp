#include <iostream>
#include <set>

int main(){
    std::set<int> horseshoes;
    for(int i = 0; i < 4; ++i){
        int horseshoe;
        std::cin >> horseshoe;
        horseshoes.insert(horseshoe);
    }
    std::cout << (4 - horseshoes.size()) << std::endl;
    return 0;
}
