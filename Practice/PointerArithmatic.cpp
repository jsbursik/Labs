#include <iostream>
using namespace std;

int main(){
    int *a;
    int b, c;

    cout << "How many numbers?: ";
    cin >> b; 

    a = new int[b];

    for(int i = 0; i < b; i++){
        *(a+i) = i;
    }

    cout << "What value do you want?: ";
    cin >> c;

    cout << *(a+c) << endl; // a[c]

    return 0;
}