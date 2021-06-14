#include <iostream>
#include <string>

int main(void){
    int x = 0;
    int n;
    std::cin >> n;

    for(int i = 0; i < n; ++i){
        std::string sentence;
        std::cin >> sentence;

        /* Legal strings are:
         * ++x
         * x++
         * --x
         * x--
         * As we can see, 2nd symbol is guaranteed to identify the operation, so we can just check it out */
        char op_code = sentence[1];
        if(op_code == '+'){
            ++x; 
        } else {
            --x;
        }
    }

    std::cout << x << std::endl;
    return 0;
}
