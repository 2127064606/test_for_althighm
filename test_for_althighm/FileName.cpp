#include<iostream>
#include"Algorithms_greedy.h"
using namespace std;
void test_for_activity_selection() {
	vector<greedy_algorithm::Activity> activities{ {1, 3}, {2, 4}, {3, 5}, {4, 6}, {5, 7} };
	vector<bool> selected(activities.size(), false);
	greedy_algorithm::greedy_activity_selection(activities, selected);
	for (int i = 0; i < selected.size(); i++) {
		if (selected[i]) {
			cout << "Activity " << i + 1 << " selected" << endl;
		}
	}
}
void test_for_loading() {
	vector<int> weights{ 1, 2, 3, 4, 5 };
	vector<bool>selects(weights.size(), false);
	int capacity = 10;
	greedy_algorithm::greedy_loading(weights, capacity,selects);
	for (int i = 0; i < selects.size(); i++) {
		if (selects[i]) {
			cout << "Item " << i + 1 << " selected" << endl;
		}
	}
}
int main() {
	test_for_loading();
}