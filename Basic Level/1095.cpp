/**
 * 1095 解码PAT准考证
 * Created by Ronn on 12/10/18
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

struct Node {
	string id;
	int sum;

	bool operator<(const Node &temp) const {
		if (this->sum != temp.sum)
			return this->sum > temp.sum;
		return this->id < temp.id;
	}
};

int main() {
	int n, m;
	cin >> n >> m;

	map<char, set<Node>> map1;
	map<string, pair<int, int>> map2;
	map<string, vector<Node>> map3;
	for (int i = 0; i < n; i++) {
		Node stu;
		string id;
		int score;
		cin >> id >> score;

		// 按bat分类存储每个考生的分数
		map1[id[0]].insert({id, score});

		// 存储每个考场的人数以及分数
		string exId = id.substr(1, 3);
		map2[exId].first++;
		map2[exId].second += score;

		// 存储每次考试每个考场的人数
		string dId = id.substr(4, 6);
		auto it = find_if(map3[dId].begin(), map3[dId].end(),
		                  [&exId](Node &it) -> bool { return it.id == exId; });
		if (it != map3[dId].end())
			it->sum++;
		else
			map3[dId].push_back({exId, 1});
	}

	for (int i = 1; i <= m; i++) {
		string str;
		int order;
		cin >> order >> str;
		printf("Case %d: %d %s\n", i, order, str.c_str());

		char c = str[0];
		if (order == 1 && !map1[c].empty())
			for (auto &it: map1[c])
				cout << it.id << " " << it.sum << endl;
		else if (order == 2 && map2[str].first)
			cout << map2[str].first << " " << map2[str].second << endl;
		else if (order == 3 && !map3[str].empty()) {
			sort(map3[str].begin(), map3[str].end());
			for (auto &temp : map3[str]) {
				cout << temp.id << " " << temp.sum << endl;
			}
		} else cout << "NA" << endl;
	}
	return 0;
}