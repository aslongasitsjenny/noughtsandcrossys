#include <iostream>

#define ever ;;


void nnc() {
    int row;
    int column;


    char crosses = 'x';
    char nought = 'o';
    char character[3][3] = {
            '_', '_', '_',
            '_', '_', '_',
            '_', '_', '_'};
    int i, j;
    bool isNoughtsTurn = true;

    for (ever) {
        std::cout << (isNoughtsTurn ? "Noughts Turn:" : "Crosses Turn:") << std::endl;
        std::cout << "row: ";
        std::cin >> row;
        std::cout << "column: ";
        std::cin >> column;

        if (isNoughtsTurn) {
            if (character[row][column] == '_') {
                character[row][column] = nought;
                isNoughtsTurn = false;
            }
        }
        else {
            if (character[row][column] == '_') {
                character[row][column] = crosses;
                isNoughtsTurn = true;
            }
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                std::cout << character[i][j];
            }
            std::cout << std::endl;
        }
        if ((character[0][0] == character[1][1])&&(character[1][1] == character[2][2])&& character[0][0] != '_'){
            if (character[0][0] == nought){
                std::cout << "nought wins ;)"<< std::endl;
            }
            else {
                std::cout << "cross wins lol"<<std::endl;
            }
        }
        if ((character[2][0] == character[1][1])&&(character[2][0] == character[0][2])&& character[2][0] != '_') {
            if (character[2][0] == nought){
                std::cout << "nought wins ;)" << std::endl;
            }
            else {
                std::cout << "cross wins lol" << std::endl;
            }
        }

        for (i = 0; i<3; i++) {
            if (character[0][i] == nought){

            }

        }
    }
}


int main() {
    nnc();


}
