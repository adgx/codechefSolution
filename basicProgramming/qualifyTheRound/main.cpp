#include <iostream>
using namespace std;

int main() {

    int nTest, score, nESolv, nHSolv;
    const int SCORE_HARD = 2, SCORE_EASY = 1;
    cin >> nTest;

    for (int i = 0; i < nTest; i++)
    {
        cin >> score >> nESolv >> nHSolv;

        if ((SCORE_EASY * nESolv + SCORE_HARD * nHSolv) >= score)
            cout << "Qualify" << endl;
        else cout << "NotQualify" << endl;
    }

    return 0;
}