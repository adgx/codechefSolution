#include <iostream>
using namespace std;

int main() {
    int nTest, numbA, numbB, numbC;

    cin >> nTest;

    for (int i = 0; i < nTest; i++)
    {
        cin >> numbA >> numbB >> numbC;
        if ((float)(numbA + numbB) / 2 > numbC)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
