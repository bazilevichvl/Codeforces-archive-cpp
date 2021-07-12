#include <iostream>
#include <cmath>

int rook_moves(int r1, int c1, int r2, int c2){
    /* Displacements along rows and columns */
    int dr = std::abs(r1 - r2);
    int dc = std::abs(c1 - c2);
    /* Atmost 2 moves required */
    return (dr > 0) + (dc > 0);
}

int king_moves(int r1, int c1, int r2, int c2){
    /* Chebyshev distance */
    return std::max(std::abs(r1 - r2), std::abs(c1 - c2));
}

int cell_color(int r, int c){
    /* 0 - white color, 1 - black */
    return (r + c) % 2;
}

int bishop_moves(int r1, int c1, int r2, int c2){
    /* Bishop always moves between cells of the same color */
    if(cell_color(r1, c1) != cell_color(r2, c2)){
        return 0;
    }

    /* Project coordinates to 45 degrees rotated system 
     * Using this rotation we can use the same concept as for the rook */
    int dr1 = (r1 + c1) / 2;
    int dc1 = dr1 - c1;
    int dr2 = (r2 + c2) / 2;
    int dc2 = dr2 - c2;

    return rook_moves(dr1, dc1, dr2, dc2);
}

int main(void){
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1 >> r2 >> c2;
    std::cout   << rook_moves(r1, c1, r2, c2) << " "
                << bishop_moves(r1, c1, r2, c2) << " "
                << king_moves(r1, c1, r2, c2) << " "
                << std::endl;
}
