#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/*
描述:无序向量中寻找两个数之和为一固定的target
提示:使用hash表存储待查询的数据
*/

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		/*
		bool find = false;
		int firstIndex = -1, endIndex = -1;

		for (size_t i = 0; i < nums.size(); ++i) {

			if (find)break;
			int val = target - nums[i];

			for (size_t j = 0; j < nums.size(); ++j) {
				if (nums[j] == val && (i != j)) {
					firstIndex = i;
					endIndex = j;
					find = true;
					break;
				}
			}
		}

		vector<int> out;
		out.push_back(firstIndex); out.push_back(endIndex);
		
		return out;
		*/
		unordered_map<int, int> hash;//(数字，数字的下标)
		vector<int> result;

		for (size_t i = 0; i < nums.size(); ++i) {
			int numberToFind = target - nums[i];

			if (hash.find(numberToFind) != hash.end()) {
				result.push_back(i);
				result.push_back(hash[numberToFind]);
				break;
			}
			hash[nums[i]] = i;

		}

		return result;
	}
};