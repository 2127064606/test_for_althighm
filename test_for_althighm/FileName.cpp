#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Loading( vector<int>& w,vector<int>&selects ,int capacity) {
	int n = w.size();
	sort(w.begin(), w.end());
	for (int i = 0;i < n;i++) {
		if (w[i] <= capacity) {
			selects[i] = 1;//select the item
			capacity -= w[i];//reduce the capacity
		}
	}
}
int main() {
	vector<int> w = { 2,7,3,4,5,6,8,9,10 };
	vector<int> selects(w.size(), 0);
	int capacity = 20;
	Loading(w, selects, capacity);
	for (int i = 0;i < w.size();i++) {
		if (selects[i] == 1) {
			cout << w[i] << " ";
		}
	}
	return 0;
}