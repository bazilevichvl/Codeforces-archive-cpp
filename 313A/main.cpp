#include <iostream>

int remove_last_digit(int num){
    return num / 10;
}

int remove_last_but_one_digit(int num){
    int tail = num % 10;
    return num / 100  * 10 + tail;
}

int maximize_balance(int num){
    if(num >= 0){
        return num;
    } else {
        int b1 = remove_last_digit(num);
        int b2 = remove_last_but_one_digit(num);
        return (b1 > b2) ? b1 : b2;
    }
}

int main(void){
    int balance;
    std::cin >> balance;
    std::cout << maximize_balance(balance) << std::endl;
}
