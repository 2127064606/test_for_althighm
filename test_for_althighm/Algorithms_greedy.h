#pragma once
#include <vector>
#include<algorithm>
using namespace std;
class greedy_algorithm {// ̰���㷨��
public:
	class Activity {//������
	public:
		int start_time, end_time;//��ʼʱ��ͽ���ʱ��
	};
	static bool compare(Activity a1, Activity a2) {// �����������
		return a1.end_time < a2.end_time;
	}
	static void greedy_activity_selection(vector<Activity>& acts,vector<bool>&selects){//   ̰���㷨���ѡ��
		int n=acts.size();
		sort(acts.begin(), acts.end(), compare);
		selects[0] = true;
		int j = 0;
		for (int i = 1;i < n;i++) {
			if (acts[i].start_time >= acts[j].end_time) {
				selects[i] = true;
				j = i;
			}
		}
	}
	static void greedy_loading(vector<int>& loads, int capacity, vector<bool>& selects) {
		sort(loads.begin(), loads.end());
		int n=loads.size();
		for (int i = 0;i < n;i++) {
			if (loads[i] <= capacity) {
				selects[i] = true;
				capacity -= loads[i];
			}
		}
	}
};