class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == val) {
                nums[i] = nums.back();  // Replace with last element
                nums.pop_back();        // Remove last element
                // Don't increment i — need to recheck new nums[i]
            } else {
                ++i;
            }
        }
        return nums.size();
    }
};
