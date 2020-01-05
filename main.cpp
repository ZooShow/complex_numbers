#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    Complex a{4,15}, b{4,15};
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << a * b << endl;
    return 0;
}
