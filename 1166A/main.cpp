#include <iostream>
#include <vector>
#include <string>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> names_per_letter(26, 0);
    for(int i = 0; i < n; ++i){
        std::string name;
        std::cin >> name;
        ++names_per_letter[name[0] - 'a'];
    }

    int talking_pairs = 0;
    for(int i = 0; i < 26; ++i){
        int to_class_A = names_per_letter[i] / 2;
        int to_class_B = names_per_letter[i] - to_class_A;
        if(to_class_A > 1){
            talking_pairs += to_class_A * (to_class_A - 1) / 2;
        }
        if(to_class_B > 1){
            talking_pairs += to_class_B * (to_class_B - 1) / 2;
        }
    }
    std::cout << talking_pairs << std::endl;
}
