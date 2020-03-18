/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
/*暴力求解法*/
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();  //得到数组长度
        for (int i = 0; i < len - 1; i++)
            for (int j = i + 1; j < len; j++) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }

        return {};
    }
};
// @lc code=end
