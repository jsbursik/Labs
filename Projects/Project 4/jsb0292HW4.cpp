#include <iostream>
#include <fstream>
using namespace std;

enum TYPE {CROSS = '+', HORIZONTAL = '-', VERTICAL = '|', LOCKED = 'X', EMPTY = ' '};
enum COLOR {RED, BLUE};

struct Tile {
  TYPE type;
  COLOR color;
  int position;
};

void getBoardSize(ifstream& in_s,int& x_size, int& y_size);

int main(){
  cout << "***************************************************" << endl;
  cout << "\tComputer Science and Engineering" << endl;
  cout << "\t CSCE 1030 - Computer Science I" << endl;
  cout << "Jordan Bursik    jsb0292    jordanbursik@my.unt.edu" << endl;
  cout << "***************************************************" << endl;
  
  ifstream in_s;

  int x_size = 0, y_size = 1;
  getBoardSize(in_s, x_size, y_size);

  Tile **board_2D = new Tile*[y_size];

  for (int i = 0; i < y_size; i++){
    board_2D[i] = new Tile[x_size];
  }

  return 0;
}

void getBoardSize(ifstream& in_s, int& x_size, int& y_size){
  char filename[20], c;
  cout << "Enter the filename for the board: ";
  cin  >> filename;

  in_s.open(filename);
  
  while(!in_s.eof()){
    in_s.get(c);
    switch(c){
      case EMPTY:
        x_size++;
        break;
      case LOCKED:
        x_size++;
        break;
      case '\n':
        ++y_size;
        break;
    }
  }
  //x_size /= y_size;
  cout << x_size << endl;
  cout << y_size << endl;
}