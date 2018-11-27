#include <iostream>
using namespace std;

int main(){
    
    int i = 1;
    while(i <= 100){
        if(i % 15 == 0) cout << "FizzBuzz" << endl;
        else if(i % 3 == 0) cout << "Fizz" << endl;
        else if(i % 5 == 0) cout << "Buzz" << endl;
        else cout << i << endl;
        i++;
    }

    cout << endl;

    return 0;
}