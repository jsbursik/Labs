/*
	Author: Jordan Bursik
	Date: 20180924
	Description: Read in a DNA String and find start and stop codes,
  output the gene.
*/  
#include <iostream>
#include <string>
using namespace std;

int main() {
  string inpDna, outGene;
  int startSeq, endSeq;

  cout << "Please input a DNA sequence: ";
  cin  >> inpDna;

  for(int i = 1;i <= inpDna.length();i++){
    // Nested if's to find start of Gene sequence and End of gene sequence and taking into account to the location of where they start
    if(inpDna[i] == 'A') {
      if(inpDna[i+1] == 'T'){
        if(inpDna[i+2]== 'G'){
          startSeq = i;
        }
      }
    }
    if(startSeq){
      if(inpDna[i] == 'T') {
        if(inpDna[i+1] == 'A'){
          if(inpDna[i+2]== 'G'){
            endSeq = i;
          }
        }
      }
    }
  }
   if(startSeq && endSeq){ // if startSeq and endSeq exist, find substr length and print the gene
      // Calculate the length of the Gene string to substr from inpDna
      int geneLength = (endSeq + 3) - startSeq;
      outGene = inpDna.substr(startSeq,geneLength+1);
      cout << "The Gene that was found: " << outGene << endl;
    } else {
      cout << "No Gene found in sequence." << endl;
    }
	return 0;
}
