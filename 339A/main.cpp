#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

// NOTE: Solution below is slightly overcomplicated
//
// Official solutions suggests to count number of 1, 2 and 3 in input string
// and then just print out corresponding exercise

std::vector<int> get_numbers(std::string exercise){
    char delimiter = '+';
    std::istringstream tokenizer(exercise);
    std::string token;
    std::vector<int> result;
    while(std::getline(tokenizer, token, delimiter)){
        result.push_back(std::stoi(token));
    }
    return result;
}

int main(void){
    std::string exercise;
    std::cin >> exercise;

    std::vector<int> numbers = get_numbers(exercise);

    std::sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); ++i){
        std::cout << numbers.at(i);
        if(i < numbers.size() - 1){
            std::cout << '+';
        }
    }
    std::cout << std::endl;

    return 0;
}
