#include <iostream>

int main(void){
    int a, b, c;
    std::cin >> a >> b >> c;
    int smallest = std::min(a, std::min(b, c));
    int largest = std::max(a, std::max(b, c));
    int mid = a + b + c - largest - smallest;
    int t = 0;
    if(largest - mid >= smallest){
        t = (largest - mid) - smallest + 1;
    } else if(smallest + mid <= largest) {
        t = smallest + mid - largest + 1;
    }
    std::cout << t << std::endl;
}
