#include <iostream>
using namespace std;

int main() {

	int nTest, nCandies;
	const int N_FRIEND = 3;

	cin >> nTest;

	for (int i = 0; i < nTest; i++)
	{
		cin >> nCandies;
		//verify if divison of candy is possible
		if (nCandies % N_FRIEND == 0)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}