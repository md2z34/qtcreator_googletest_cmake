#include "../include/seged.h"

using namespace std;

int main()
{
    int T;
    int szam;
    vector<int> N;
    int a = mirror_left2right(123456);
    int b = mirror_left2right(1234567);
    int c = mirror_left2right(8);
    cout << "Input:" << endl;
    cin >> T;

    for (int i=0;i<T;++i){
        cin >> szam;
        N.push_back(szam);
    }
    cout << "End of execution" << endl;
    return 0;
}
