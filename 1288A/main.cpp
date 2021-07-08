#include <iostream>
#include <cmath>

bool can_provide_results(int n, int d){
    if(n >= d){
        return true;
    }
    /*
     *  x + ceil(y) = ceil(x + y)
     *  Using property above, we come up with the following expression for computation time:
     *  T = ceil(n + d/ (n+1))
     *
     *  Taking derivative of the expression under ceiling operator we get:
     *  d/dn(n + d / (n+1)) = 1 - d/(n+1)^2
     *
     *  The function is monotonically increasing.
     *
     *  Setting it to 0 an solving this equation we obtain n = sqrt(d) - 1.
     *  Since n must be integer, we can check only floor(sqrt(d) - 1) and ceil(sqrt(d) - 1)
     * */

    int c = std::ceil(std::sqrt(d) - 1);
    int f = std::floor(std::sqrt(d) - 1);

    if(c + d / (c + 1) + (d % (c + 1) > 0) <= n){
        return true;
    } else if(f + d / (f + 1) + (d % (f + 1) > 0) <= n){
        return true;
    }
    return false;
}

int main(void){
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i){
        int n, d;
        std::cin >> n >> d;
        if(can_provide_results(n, d)){
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
        std::cout << std::endl;
    }
}
