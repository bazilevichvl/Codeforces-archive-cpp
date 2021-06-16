#include <iostream>
#include <set>

int main(void){
    int n;
    std::cin >> n;

    std::set<int> levels;
    /* Fill set with numbers from 1 to n*/
    for(int i = 1; i <= n; ++i){
        levels.insert(i);
    }

    /* Read list of levels which X can pass */
    int p;
    std::cin >> p;
    for(int i = 0; i < p; ++i){
        int l;
        std::cin >> l;
        auto l_iter = levels.find(l);
        if(l_iter != levels.end()){
            levels.erase(l_iter);
        }
    }
    /* Read list of levels which Y can pass */
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        int l;
        std::cin >> l;
        auto l_iter = levels.find(l);
        if(l_iter != levels.end()){
            levels.erase(l_iter);
        }
    }

    if(levels.empty()){
        std::cout << "I become the guy.";
    } else {
        std::cout << "Oh, my keyboard!";
    }
    std::cout << std::endl;
}
