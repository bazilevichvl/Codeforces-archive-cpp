#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

/* Find where Dreamoon should stop given a correct root*/
int final_point(const std::string& s){
    int x = 0;
    for(char c : s){
        if(c == '+'){
            ++x;
        } else if(c == '-'){
            --x;
        } else {
            std::cerr << "Valid route given by Drazil must contain only '+' and '-'" << std::endl;
            std::exit(EXIT_FAILURE);
        }
    }
    return x;
}

double probability_of_reaching_destination(const int& target, int x, const std::string& s, int s_index){
    if(s_index == s.length() && x == target){
        return 1.0;
    } else if(s_index == s.length()){
        return 0.0;
    }

    char move = s[s_index];
    int s_index_next = s_index + 1;
    if(move == '-'){
        return probability_of_reaching_destination(target, x - 1, s, s_index_next);
    } else if(move == '+'){
        return probability_of_reaching_destination(target, x + 1, s, s_index_next);
    } else {
        return 0.5 * probability_of_reaching_destination(target, x + 1, s, s_index_next) + 0.5 * probability_of_reaching_destination(target, x - 1, s, s_index_next);
    }
}

int main(void){
    std::string s1, s2;
    std::cin >> s1 >> s2;

    int target = final_point(s1);
    std::cout << std::setprecision(12) << probability_of_reaching_destination(target, 0, s2, 0) << std::endl;
}
