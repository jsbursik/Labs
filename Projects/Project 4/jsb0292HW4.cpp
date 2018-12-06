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
void setBoard(ifstream& in_s, Tile **t, int x, int y);
void printBoard(Tile **t, int x, int y);
void printRules();
void playerTurn(Tile **t, int x, int y);
void cpuTurn(Tile **t, int x, int y);


int main(){
  cout << "***************************************************" << endl;
  cout << "\tComputer Science and Engineering" << endl;
  cout << "\t CSCE 1030 - Computer Science I" << endl;
  cout << "Jordan Bursik    jsb0292    jordanbursik@my.unt.edu" << endl;
  cout << "***************************************************" << endl;
  
  ifstream in_s;
  Tile **tiles;
  int x = 0, y = 1;
  bool playerWon = false, cpuWon = false;

  openBoard(in_s, tiles, x, y);

  tiles = new Tile*[y];
  for (int i = 0; i < y; i++){
    tiles[i] = new Tile[x];
  }

  setBoard(in_s, tiles, x, y);
  printRules();
  printBoard(tiles, x, y);
  while(!playerWon || !cpuWon){
    playerTurn(tiles, x, y);
    cpuTurn(tiles, x, y);
    printBoard(tiles, x, y);
  }


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

  in_s.clear();
  in_s.seekg(0, ios::beg);
}

void setBoard(ifstream& in_s, Tile **t, int x, int y){
  char c;
  int j_actual;
  in_s.get(c);
  if(c == ',' || c=='\n'){
    in_s.get(c);
  }
  for (int i = 0; i < y; i++){
    j_actual = 0;
    for (int j = 0; j < x; j++){
      if((c==LOCKED) || (c==EMPTY)){
        t[i][j].type = static_cast<TYPE>(c);
        t[i][j].position = j;
      }
      in_s.get(c);
      if(c==',' || c=='\n'){
        in_s.get(c);
      }
    }
  }
}

void printBoard(Tile **t, int x, int y){
  cout << "  ";
  for (int i = 0; i < x; i++){
    cout << i+1 << " ";
  }
  cout << endl;
  
  for (int i = 0; i < y; i++){
    cout << i+1 << " ";
    for (int j = 0; j < x; j++){
      cout << static_cast<char>(t[i][j].type) << " ";
    }
    cout << endl;
  }
}

void printRules(){
  cout << "********************The aMAZEing Labyrinth********************" << endl;
  cout << "\t\t\t   Rules" << endl;
  cout << "The aMAZEing Labyrinth is a two player game in which players" << endl;
  cout << "take turns sliding tiles, marked with |, -, or +, into lanes" << endl;
  cout << "from their side of the board. The goal is to have at least one" << endl;
  cout << "lane that has a straight, connected path from one player's" << endl;
  cout << "side of the board to the opposite side. This game is as much" << endl;
  cout << "about offense as it is defense, as you will have to try to" << endl;
  cout << "extend your path while blocking your opponent's progress." << endl;
  cout << "\t\t\tGood luck!" << endl;
  cout << "**************************************************************" << endl;
}

void playerTurn(Tile **t, int x, int y){
  int choice = 0;
  char c;
  cout << "Choose a lane 1-" << y << " or type -1 to quit: ";
  cin >> choice;
  if(choice==-1){
    cout << "You have surrendered, goodbye!" << endl;
    exit(EXIT_SUCCESS);
  }
  cout << "Choose a tile type +, -, or |: "; cin >> c;
  while((!c == CROSS)||(!c == VERTICAL)||(!c == HORIZONTAL)){
    cout << "Invalid tile type, Choose a tile type +, -, or |: "; cin >> c;
  }
  if(t[6][choice-1].type == LOCKED){
    cout << "A locked tile is preventing you from adding a tile there, better luck next time.";
  } else if((!t[6][choice-1].type == LOCKED) || (!t[6][choice-1].type == EMPTY)){
    
  } else {
    t[6][choice-1].type = static_cast<TYPE>(c);
  }
  
}

void cpuTurn(Tile **t, int x, int y){

}