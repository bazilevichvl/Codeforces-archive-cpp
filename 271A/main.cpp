#include <iostream>

bool all_unique(int arr[]){
    for(int i = 0; i < 4; ++i){
        for(int j = i + 1; j < 4; ++j){
            if(arr[i] == arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(void){
    int year;
    std::cin >> year;
    int ans;
    for(ans = year + 1; ; ++ans){
        int digits[4];
        int ans_copy = ans;
        for(int i = 0; i < 4; ++i){
            digits[i] = ans_copy % 10;
            ans_copy /= 10;
        }
        if(all_unique(digits)){
            break;
        }
    }

    std::cout << ans << std::endl;
}
