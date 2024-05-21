#include <iostream>

using namespace std;

void Summmary(){
    cout << "1. Searching For Something" << endl;
    cout << "2. View Search Results" << endl;
    cout << "3. Filter Results" << endl;
}

int getInput(){
    cout << "Enter Your Selection Here: " << flush;
    int input;
    cin >> input;

    return input;
}

void Selection(int selection){
    switch(selection){
        case 1:
            cout << "Searching For Something" << endl;
            break;
        case 2:
            cout << "View Search Results" << endl;
            break;
        case 3:
            cout << "Filter Results" << endl;
            break;
        default:
            cout << "Invalid Selection" << endl;
    }
}

int main(){
    Summmary();
    int selection = getInput();
    Selection(selection);
}