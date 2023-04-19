#include <iostream>
using namespace std;

int main() {

	int nTest, startRange, currentD;

	cin >> nTest;

	for (int i = 0; i < nTest; i++)
	{
		cin >> startRange >> currentD;

		if (currentD >= startRange && currentD <= startRange + 200)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
