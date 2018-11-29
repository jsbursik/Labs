#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum TYPE {LOCKED = 'X', EMPTY = ' ', CROSS = '+', HORIZONTAL = '-', VERTICAL = '|'};
enum COLOR {RED, BLUE, NONE};

struct Tile{
  TYPE type = EMPTY;
  COLOR color = NONE;
  int position;
};

void openBoard(ifstream& in_s, Tile **t, int&x, int&y);
void printBoard(Tile **t, int x, int y);

int main(){
  Tile **tiles;
  ifstream in_s;
  int x = 0, y = 1;

  openBoard(in_s, tiles, x, y);

  tiles = new Tile*[y];

  for (int i = 0; i < y; i++){
    tiles[i] = new Tile[x];
  }

  printBoard(tiles, x, y);

  cout << x << endl;
  cout << y << endl;

  in_s.close();
  for (int i = 0; i < y; i++){
    delete[] tiles[i];
  }
  delete[] tiles;
  return 0;
}


void openBoard(ifstream& in_s, Tile **t, int&x, int&y){
  char filename[20], c;

  cout << "Enter filename: "; cin >> filename;
  in_s.open(filename);
  while(in_s.fail()){
    cout << "Failed to open file, try again: "; cin >> filename;
    in_s.open(filename);
  }

  in_s.get(c);
  while(!in_s.eof()){
    x = ((c == 'X') || (c == ' ')) ? ++x : x;
    y = (c == '\n') ? ++y : y;
    in_s.get(c);
  }

  x /= y;

}

void printBoard(Tile **t, int x, int y){
  for (int i = 0; i < y; i++){
    for (int j = 0; j < x; j++){
      cout << static_cast<char>(t[i][j].type) << " ";
    }
    cout << endl;
  }
}
