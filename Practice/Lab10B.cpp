#include <iostream>
using namespace std;

int main(){
    int a;
    int *b, *c;

    a = 10;

    b = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << *b << endl;

    *b = 15;

    cout << a << endl;
    cout << *b << endl;

    b = new int;
    *b = 20;
    cout << a << endl;
    cout << *b << endl;

    c = new int;
    c = b;

    // *c = *b would make it different memory addresses, but the same values, 
    // c = b, just makes c the same memory addresses, technically the same value

    cout << *c << endl;

    delete b, c;

    return 0;
}