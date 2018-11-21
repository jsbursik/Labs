#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void get_stream(ifstream& in_s, ofstream& out_s);

int main(){
  char c;
  ifstream in_s;
  ofstream out_s;

  get_stream(in_s, out_s);

  while (!in_s.eof()) {
    in_s.get(c);
    out_s.put(c);
  }

  cout << "File written!" << endl;
  
  in_s.close();
  out_s.close();

  return 0;
}

void get_stream(ifstream& in_s, ofstream& out_s){
  char input_file[15];
  char output_file[15];

  cout << "Enter the name of the input file: ";
  cin >> input_file;

  cout << "Enter the name of the ouput file: ";
  cin >> output_file;

  out_s.open(output_file);
  in_s.open(input_file);
  if (in_s.fail()){
    cout << "Unable to open input file " << input_file << endl;
    exit(EXIT_FAILURE);
  }

  return;
}