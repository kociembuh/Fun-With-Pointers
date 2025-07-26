#include <iostream>

using std::cout; using std::endl;

int main() {

    int age = 15;
    int *pAge = &age;

    cout << &age << endl; //
    cout << pAge << endl; 
    cout << *pAge << endl;

    return 0;
}