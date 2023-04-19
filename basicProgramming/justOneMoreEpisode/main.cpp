#include <iostream>
using namespace std;

int main() {
	const int duration = 24;
	int nTest, min;

	cin >> nTest;

	for (int i = 0; i < nTest; i++)
	{
		cin >> min;

		if (min > duration)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}