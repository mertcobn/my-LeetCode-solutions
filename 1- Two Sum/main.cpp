class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        size_t arr_size = nums.size();

        for (int i = 0; i < arr_size; i++) {

            for (int j = i + 1; j < arr_size; j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
