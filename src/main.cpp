#include "../include/seged.h"

using namespace std;

int main()
{
    int T;
    int szam;
    vector<int> N;

    cout << "Input:" << endl;
    cin >> T;

    for (int i=0;i<T;++i){
        cin >> szam;
        N.push_back(szam);
    }
    cout << "End of execution" << endl;
    return 0;
}
