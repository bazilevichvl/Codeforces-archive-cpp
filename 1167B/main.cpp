#include <iostream>
#include <vector>
#include <cmath>

/*  Some related thoughs:
 *
 *  1. Among special numbers only 15 is divisible by 5
 *  2. Among special numbers only 42 is divisible by 7
 *  3. Among special numbers only 23 is prime
 *  4. Numbers 4, 8, 16 are powers of two
 *  4. In query numbers i and j can be the same number
 * */

int guess_square(int i){
    std::cout << "? " << i << " " << i << std::endl;
    int square;
    std::cin >> square;
    return sqrt(square);
}

int query_pair(int i, int j){
    std::cout << "? " << i << " " << j << std::endl;
    int res;
    std::cin >> res;
    return res;
}

int guess_third(int q1, int q2){
    if(q1 % 5 == 0 && q2 % 5 == 0){
        return 15;
    }

    if(q1 % 7 == 0 && q2 % 7 == 0){
        return 42;
    }

    if(q1 % 23 == 0 && q2 % 23 == 0){
        return 23;
    }

    /* At this point third number is a power of two */
    if(q1 % 5 == 0){
        return q1 / 15;
    } else if(q1 % 7 == 0){
        return q1 / 42;
    } else if(q1 % 23 == 0){
        return q1 / 23;
    }

    if(q2 % 5 == 0){
        return q2 / 15;
    } else if(q2 % 7 == 0){
        return q2 / 42;
    } else if(q2 % 23 == 0){
        return q2 / 23;
    }


    /* If we reached this point, third, forth and fifth elements are powers of 2(4, 8 or 16) */
    int min = (q1 < q2) ? q1 : q2;
    int max = (q1 > q2) ? q1 : q2;

    if(min == 32 && max == 64){
        return 4;
    }
    if(min == 32 && max == 128){
        return 8;
    }
    return 16;
}

int get_remaining(std::vector<int> a){
    int prod = 4 * 8 * 16 * 15 * 23 * 42;
    for(int i = 0; i < 5; ++i){
        prod /= a[i];
    }
    return prod;
}

int main(void){
    std::vector<int> a(6, 0);

    /* First two steps: quess squares */
    a[0] = guess_square(1);
    a[1] = guess_square(2);

    /*  Now we know first two numbers
     *  Lets query pairs 3 4 & 3 5
     *  This way we will obtain enough info on number 3
     *  Therefore, we will find number 4 & 5
     *  and number 6 will be the only remaining
     * */

    int q1 = query_pair(3, 4);
    int q2 = query_pair(3, 5);

    a[2] = guess_third(q1, q2);
    a[3] = q1 / a[2];
    a[4] = q2 / a[2];

    a[5] = get_remaining(a);

    std::cout << "! ";
    for(int num : a){
        std::cout << num << " ";
    }
    std::cout << std::endl;
   
    return 0;
}
