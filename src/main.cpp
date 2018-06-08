#include "../include/seged.h"

using namespace std;

int main()
{
    int T;
    int szam;
    vector<int> N;
    cout << "Digit: " << get_digit(789,0) << endl;
    cout << "Digit: " << get_digit(789,1) << endl;
    cout << "Digit: " << get_digit(789,2) << endl;
    cout << "Digit: " << get_digit(789,3) << endl;
    cout << "Digit: " << get_digit(789,4) << endl;

    cout << "Input:" << endl;
    cin >> T;

    for (int i=0;i<T;++i){
        cin >> szam;
        N.push_back(szam);
    }
    cout << "End of execution" << endl;
    return 0;
}
