#include <string>
#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int j = 20;

    if (i == j){
        cout << "i and j are equal" << endl;
    }else{
        cout << "i and j are not equal" << endl;
    }
    if (i>=j)
    {
        cout << "i is greater than or equal to j" << endl;
    }else{
        cout << "i is less than j" << endl;
    }
    if (i<=j){
        cout << "i is less than or equal to j" << endl;
    }else{
        cout << "i is greater than j" << endl;
    }
    if (i!=j)
    {
        cout << "i is not equal to j" << endl;
    }else{
        cout << "i is equal to j" << endl;
    }
    if (i>j)
    {
        cout << "i is greater than j" << endl;
    }else{
        cout << "i is not greater than j" << endl;
    }
    if (i<j)
    {
        cout << "i is less than j" << endl;
    }else
    {
        cout << "i is not less than j" << endl;
    }
    return 0;
}