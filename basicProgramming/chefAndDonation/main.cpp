#include <iostream>
using namespace std;

int main() {

	int nTest, rupeesC, rupeesCa;

	cin >> nTest;

	for (int i = 0; i < nTest; i++)
	{
		cin >> rupeesC;
		cin >> rupeesCa;
		cout << rupeesCa - rupeesC << endl;
	}

	return 0;
}