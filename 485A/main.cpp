#include <iostream>
#include <set>

int main(void){
    int a, m;
    std::cin >> a >> m;
    std::set<int> ring;
    bool failed = false;
    while(true){
        int newly_produced = a % m;
        if(newly_produced == 0){
            failed = true;
            break;
        } else {
            a += newly_produced;
            if(ring.find(newly_produced) != ring.end()){
                break;
            }
            ring.insert(newly_produced);
        }
    }

    if(!failed){
        std::cout << "No";
    } else {
        std::cout << "Yes";
    }
    std::cout << std::endl;
}
