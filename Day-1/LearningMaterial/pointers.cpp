#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << pAge << endl;
    // dereferencing a pointer
    cout << *pAge << endl;

    // dereferencing and referencing a pointer
    cout << *&gpa << endl;
    
    return 0;
}