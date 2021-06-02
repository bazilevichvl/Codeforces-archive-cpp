#include <iostream>
#include <string>
#include <vector>
#include <set>

int main(void){
    std::string message;
    std::cin >> message;

    // we need a quick access to next positions of q
    std::vector<int> q_indices;
    // we need a quick lookup for a's
    std::set<int> a_indices;

    for(int i = 0; i < message.size(); ++i){
        char c = message.at(i);
        if(c == 'Q'){
            q_indices.push_back(i);
        } else if(c == 'A'){
            a_indices.insert(i);
        }
    }

    int total = 0; 
    for(int i = 0; i + 1 < q_indices.size(); ++i){
        for(int j = i+1; j < q_indices.size(); ++j){
            /* We now have 2 indices of letter 'Q'. The only remaining step is to count how many A's are between them*/
            auto iter = a_indices.lower_bound(q_indices.at(i));
            int count = 0;
            while(iter != a_indices.end()){
                if(*iter < q_indices.at(j)){
                    ++count;
                    iter++;
                } else {
                    break;
                }
            }
            total += count;
        }
    }

    std::cout << total << std::endl;
}
