#include <iostream>
using namespace std;

const int SIZE = 40;

int main(){
  
  int a[SIZE][SIZE];

  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      a[i][j] = 1;
    }
  }

  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}