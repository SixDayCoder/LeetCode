/*
URL : https://leetcode.com/problems/k-diff-pairs-in-an-array/description/
描述 : 给定一个数组和一个数字k，找出有多少对数字（x,y)满足|x - y| = k
提示 : 给定一个前指针i和后指针j，将数组排序后
       (1)如果i >= j，或者array[i] + k > array[j], 那么j指针后移
       (2)如果array[i - 1] == array[i] , 或者array[i] + k < array[j],i指针后移
       (3)如果满足条件，那么i，j指针都后移 

*/


class Solution {
public:
	int findPairs(vector<int>& nums, int k) {

		int result = 0;
		sort(begin(nums), end(nums));//有序

		//i是前指针 j是后指针 nums[i]必定小于nums[j]
		for (size_t i = 0, j = 1; j < nums.size(); ) {

			//如果前指针超过后指针或者前指针+k>后指针 后移后指针
			if (j <= i || nums[i] + k > nums[j]) j++;
			else if ( (i > 0 && nums[i] == nums[i - 1] ) ||
				       nums[i] + k < nums[j] )  i++;
			//跳过重复元素 若nums[i] + k < nums[j]时后移前指针

			else {//找到了一对(nums[i], nums[j])使得nums[j] - nums[i] = k
				result++;
				i++;
				j++;
			}
		}

		return result;
	}
};
