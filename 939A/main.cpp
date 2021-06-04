#include <iostream>
#include <vector>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> likes;
    for(int i = 1; i <= n; ++i){
        int f;
        std::cin >> f;
        likes.push_back(f);
    }

    bool triangle = false;
    for(int i = 0; i < n; ++i){
        int first_liked = likes[i] - 1;
        int second_liked = likes[first_liked] - 1;
        if(likes[second_liked] - 1== i){
            triangle = true;
            break;
        }
    }

    if(triangle){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}
