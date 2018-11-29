#include <iostream>
#include <fstream>
using namespace std;

enum TYPE {CROSS = 'X', EMPTY = ' '};

struct Tile{
    TYPE type;
    int test = 1;
};

int main(){
    Tile **tiles;

    int x = 3, y = 4;

    tiles = new Tile*[y];

    for (int i = 0; i < y; i++){
        tiles[i] = new Tile[3];
    }

    for (int i = 0; i < y; i++){
        for (int j = 0; j < 3; j++){
            tiles[i][j].type = CROSS;
        }
    }

    for (int i = 0; i < y; i++){
        for (int j = 0; j < 3; j++){
            cout << static_cast<char>(tiles[i][j].type) << " ";
        }
        cout << endl;
    }

    return 0;
}