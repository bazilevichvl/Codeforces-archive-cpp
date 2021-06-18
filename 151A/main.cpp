#include <iostream>

int main(void){
    int friends, bottles, volume, limes, lime_slices, salt, drink_water, drink_salt;
    std::cin >> friends >> bottles >> volume >> limes >> lime_slices >> salt >> drink_water >> drink_salt;
    int water = bottles * volume;
    int lime = limes * lime_slices;
    int drinks = std::min(std::min(water / drink_water, salt / drink_salt), lime);
    std::cout << drinks / friends << std::endl;
    return 0;
}
