/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
/*暴力求解法
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();  //得到数组长度
        for (int i = 0; i < len - 1; i++)
            for (int j = i + 1; j < len; j++) {  //对数组里每两个数都配对一次
                if (nums[i] + nums[j] == target)  //等于目标值
                    return {i, j};                //返回两个元素值
            }

        return {};
    }
};*/

/*哈希表*/
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;  //构建哈希表m

        for (int i = 0; i < nums.size(); i++) {       //从开始到最后
            if (m.find(target - nums[i]) != m.end())  // m中存在对应的键值
                return {
                    m[target - nums[i]],
                    i};  //因为i为较大的元素，此时添加进去的键值都还小于i，所以i在后面

            m[nums[i]] = i;  //否则向map中添加元素
        }
        return {};
    }
};

// @lc code=end
