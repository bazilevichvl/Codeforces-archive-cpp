#include <iostream>
#include <string>

int get_faces(std::string polyhedron_name){
    char first_letter = polyhedron_name[0];
    switch(first_letter) {
        case 'T' : return 4;
        case 'C' : return 6;
        case 'O' : return 8;
        case 'D' : return 12;
        case 'I' : return 20;
    }
    
    return -1;
}

int main(void){
    int N;
    std::cin >> N;

    int total_faces = 0;
    for(int i = 0; i < N; ++i){
        std::string polyhedron_name;
        std::cin >> polyhedron_name;

        total_faces += get_faces(polyhedron_name);
    }
    std::cout << total_faces << std::endl;
    return 0;
}
