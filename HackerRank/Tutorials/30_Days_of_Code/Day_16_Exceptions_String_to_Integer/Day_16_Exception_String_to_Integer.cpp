#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	getline(cin, S);

	try {
        	cout << stoi(S) << endl;
	} catch (...) {		// a variadic parameter should be used.
        	cout << "Bad String" << endl;
	}

	return 0;
}
