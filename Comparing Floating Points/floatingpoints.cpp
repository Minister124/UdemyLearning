#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x = 2.2f;

    if(x==2.2f){
        cout << "It is equal" << endl;
    }else{
        cout << "It is not equal" << endl;
    }

    cout << setprecision(10) << x << endl;
    return 0;
}