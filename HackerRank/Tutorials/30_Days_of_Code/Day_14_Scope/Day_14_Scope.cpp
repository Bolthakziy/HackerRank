#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
	private:
		vector<int> elements;

	public:
		int maximumDifference;

		// Add your code here
		Difference(vector<int> elements)
		{
			this->elements = elements;
		}

		int computeDifference(void)
		{
			int idx, idx2, last_idx = this->elements.size(), difference;
			maximumDifference = 0;

			for (idx = 0; idx < last_idx - 1; idx++) {
				for (idx2 = idx + 1; idx2 < last_idx; idx2++) {
					this->elements.at(idx) - this->elements.at(idx2) > 0? difference = this->elements.at(idx) - this->elements.at(idx2) : difference = this->elements.at(idx2) - this->elements.at(idx);

					if (difference >= maximumDifference) {
						maximumDifference = difference;
					} else {

					}
				}
			}

			return maximumDifference;
		}
}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);
	d.computeDifference();
	cout << d.maximumDifference;

	return 0;
}
