#include <iostream>
#include <limits>

using namespace std;

int main(){
    int test = 0;
    int value = 2646;
    cout << value << endl;
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    
    long int lValue = 154564646;
    cout << lValue << endl;

    short int sValue = 2583;
    cout << sValue << endl;

    cout << "size of an Int" << sizeof(int) << endl;
    cout << "size of string" << sizeof(string) << endl;
    cout << "size of an Short Int" << sizeof(short int) << endl;
    return 0;
};