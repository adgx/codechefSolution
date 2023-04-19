#include <iostream>
using namespace std;

int main() {

	int nTest, scoreC, scoreCa;
	//number of test cases
	cin >> nTest;

	for (int i = 0; i < nTest; i++)
	{
		cin >> scoreC >> scoreCa;

		if (scoreC + scoreCa > 6)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}