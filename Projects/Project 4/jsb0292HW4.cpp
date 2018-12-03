#include <iostream>
#include <fstream>
using namespace std;

enum TYPE {EMPTY = ' ', LOCKED = 'X', CROSS = '+', VERTICAL = '|', HORIZONTAL = '-'};
enum COLOR {RED, BLUE, NONE};

struct Tile {
  TYPE type = EMPTY;
  COLOR color = NONE;
  int position;
};

void openBoard(ifstream& in_s, Tile **t, int& x, int& y);

int main(){
  cout << "***************************************************" << endl;
  cout << "\tComputer Science and Engineering" << endl;
  cout << "\t CSCE 1030 - Computer Science I" << endl;
  cout << "Jordan Bursik    jsb0292    jordanbursik@my.unt.edu" << endl;
  cout << "***************************************************" << endl;
  
  ifstream in_s;
  Tile **tiles;
  int x = 0, y = 1;

  openBoard(in_s, tiles, x, y);

  tiles = new Tile*[y];
  for (int i = 0; i < y; i++){
    tiles[i] = new Tile[x];
  }

  cout << x << endl;
  cout << y << endl;
  
  in_s.close();
  for (int i = 0; i < y; i++){
    delete[] tiles[i];
  }
  delete[] tiles;
  return 0;
}

void openBoard(ifstream& in_s, Tile **t, int& x, int& y){
  char filename[20], c;
  cout << "Enter the filename for the board: "; cin >> filename;
  in_s.open(filename);
  while(in_s.fail()){
    cout << "File failed to open, please enter another file name: "; cin >> filename;
    in_s.open(filename);
  }

  in_s.get(c);
  while(!in_s.eof()){
    x = ((c==LOCKED) || (c==EMPTY)) ? ++x: x;
    y = (c == '\n') ? ++y: y;
    in_s.get(c);
  }
  x /= y;

}