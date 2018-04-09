#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int>& a) {
	for (auto i=0; i<a.size()-1; i++) {
		for (auto j = 0; j < a.size() -1;j++) {
			int b;
			if (a[j] < a[j + 1]) {
				b = a[j + 1];
				a[j + 1] = a[j];
				a[j] = b;
			}
		}
	}
}
void main() {
	vector<int> NumberList;
	int num;
	while (cin >> num) {
		NumberList.push_back(num);
	}
	sort(NumberList);
	cout << endl;
	cout << "ordered array" << endl;
	for (auto i : NumberList) {
		cout << i << " ";
	}
	system("pause");
}