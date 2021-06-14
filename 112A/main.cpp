#include <iostream>
#include <string>

char to_lower(char c){
    if(c < 95) { 
        c = c - 65  + 97;
    }
    return c;
}

int main(void){
    std::string a, b;
    std::cin >> a >> b;

    /* Compare */
    int comp = 0;
    for(int i = 0; i < a.length(); ++i){
        char ca = to_lower(a[i]);
        char cb = to_lower(b[i]);
        if(ca < cb){
            comp = -1; 
            break;
        } else if(ca > cb){
            comp = 1;
            break;
        }
    }
    std::cout << comp << std::endl;
    return 0;
}
