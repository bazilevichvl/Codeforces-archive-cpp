#include <iostream>
#include <stack>

int main(void){
    int n;
    std::cin >> n;
    
    std::stack<int> programmers;
    std::stack<int> mathematicians;
    std::stack<int> athlets;

    for(int i = 1; i <= n; ++i){
        int talent;
        std::cin >> talent;
        if(talent == 1){
            programmers.push(i);
        } else if(talent == 2){
            mathematicians.push(i);
        } else {
            athlets.push(i);
        }
    }

    /* Number of possible teams is the least amount of student in particular group */
    int w = std::min(programmers.size(), std::min(mathematicians.size(), athlets.size()));
    std::cout << w << std::endl;

    for(int i = 0; i < w; ++i){
        std::cout << programmers.top() << " " << mathematicians.top() << " " << athlets.top() << std::endl;
        programmers.pop();
        mathematicians.pop();
        athlets.pop();
    }
}
