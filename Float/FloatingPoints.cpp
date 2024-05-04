#include <iostream>
#include <iomanip>

using namespace std;
    int main(){
        float fvalue = 7.45;

        cout << sizeof(float) << endl;
        cout << setprecision(10)  << fixed << fvalue << endl;


        double check = 7.45;

        cout << sizeof(double) << endl;
        cout << setprecision(10) << fixed << check << endl;


        long double checking = 7.45564464984986498894849864984453968;

        cout << sizeof(long double) << fixed << endl;
        cout << checking << endl;

    }
 // namespace std
