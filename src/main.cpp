#include "../include/seged.h"

using namespace std;

int main()
{
    vector<int> N;
    N.push_back(23);
    N.push_back(1234567);
    N.push_back(100);
    N.push_back(10000);

    for (auto it=N.begin();it!=N.end();++it) {
        int cp=find_closest_palindrome(*it);
        cout << "Closest palindrome of " << *it << " is " << cp << ". Difference " << abs(cp-*it) << endl;
    }

    return 0;
}
