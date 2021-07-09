#include <iostream>
#include <vector>
#include <set>
int main(void){
    int n;
    std::cin >> n;
    std::vector<int> relations(n, -1);
    for(int i = 0; i < n; ++i){
        int head;
        std::cin >> head;
        if(head != -1){
            relations[i] = head - 1;
        }
    }

    /* Maximal height of the tree in relations is equal to a number of groups required */
    std::vector<int> heights(n, -1);
    for(int h : heights){
        std::cerr << h << " ";
    }
    std::cerr << std::endl;
    int max_h = 0;
    /* Start from each node and find distance from this node to the root */
    for(int i = 0; i < n; ++i){
        int h = 0;
        int cur = i;
        while(cur != -1){
            int head = relations[cur];
            if(heights[cur] != -1){
                h += heights[cur];
                break;
            }
            ++h;
            cur = head;
        }
        //std::cerr << i << " " << relations[i] << " " << h << std::endl;
        if(h > max_h){
            max_h = h;
        }
        heights[i] = h;
    }
    std::cout << max_h << std::endl;
}
