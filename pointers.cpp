#include <iostream>

using std::cout; using std::endl;

int main() {

    int age = 15;
    int *pAge = &age;

    cout << &age << endl; // prints memory address of variable "age"
    cout << pAge << endl; // prints pointer "pAge" which is the memory address of "age" variable
    cout << *pAge << endl; // prints dereferenced pointer variable "pAge"

    return 0;
}
