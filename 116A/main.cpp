#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    int passengers = 0;
    int required_capacity = 0;
    for(int i = 0; i < n; ++i){
        int a, b;
        std::cin >> a >> b;
        passengers -= a;
        passengers += b;
        if(passengers > required_capacity){
            required_capacity = passengers;
        }
    }
    std::cout << required_capacity << std::endl;
    return 0;
}
