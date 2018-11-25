/*
  Author: Jordan Bursik
  Date: 2018-11-24
  Description: 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum Type {CROSS = '+', HORIZONTAL = '-', VERTICAL = '|', LOCKED = 'X', EMPTY = ' '};
enum Colors {RED, BLUE};

struct Tile {
  Type symbol;
  Colors color;
  int lane;
};

int main(){



  return 0;
}