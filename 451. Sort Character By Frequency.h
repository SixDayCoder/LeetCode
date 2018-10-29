
/*
URL  :  https://leetcode.com/problems/sort-characters-by-frequency/description/
描述 : 按照字母出现的频率排序
提示 : 练习lambda表达式
*/


class Solution {
public:
	string frequencySort(string s) {
		int count[256] = { 0 };
		int index = 0;
		for (int i = 0; i < s.size(); ++i) {
			index = static_cast<int>(s[i]);
			count[index]++;
		}
		
		sort(s.begin(), s.end(), [&](char lhs, char rhs) {
			return count[lhs] > count[rhs] || (count[lhs] == count[rhs] && lhs < rhs);
		});

		return s;
	} 
};
