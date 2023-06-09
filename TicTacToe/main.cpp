#include <iostream>
#include <ctime>

using namespace std;


void drawBoard(char *spaces);

void playerMove(char *spaces, char player);

void computerMove(char *spaces, char computer);

bool checkWinner(char *spaces, char player, char computer);

bool checkTie(char *spaces);

int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};


    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {

        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }

    }


    return 0;
}

void drawBoard(char *spaces) {

    cout << "      |      |      " << endl;
    cout << "  " << spaces[0] << "   |  " << spaces[1] << "   |   " << spaces[2] << "   " << endl;
    cout << "______|______|______" << endl;
    cout << "      |      |      " << endl;
    cout << "  " << spaces[3] << "   |  " << spaces[4] << "   |   " << spaces[5] << "   " << endl;
    cout << "______|______|______" << endl;
    cout << "      |      |      " << endl;
    cout << "  " << spaces[6] << "   |  " << spaces[7] << "   |   " << spaces[8] << "   " << endl;
    cout << "      |      |      " << endl;


}

void playerMove(char *spaces, char player) {

    int pl;
    do {
        cout << "enter a spot to place a marker (1-9): ";
        cin >> pl;
        pl--;

        if (spaces[pl] == ' ') {
            spaces[pl] = player;
            break;
        }

    } while (!pl > 0 || !pl < 8);

}

void computerMove(char *spaces, char computer) {

    int co;
    srand(time(0));


    while (true) {
        co = rand() % 9;
        if (spaces[co] == ' ') {
            spaces[co] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {

    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {
        if (spaces[0] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
        if (spaces[3] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
        if (spaces[6] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
        if (spaces[0] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
        if (spaces[1] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
        if (spaces[2] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        if (spaces[0] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        if (spaces[2] == player) {
            cout << "YOU WIN !" << endl;
        } else {
            cout << "YOU LOST!" << endl;
        }
    } else {
        return false;
    }
    return true;
}

bool checkTie(char *spaces) {
    return 0;
}

