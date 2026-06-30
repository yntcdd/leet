class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                bool found = false;
                for (int j = i; j >= 0; j--) {
                    if (nums[j] + j > i || nums[j] + j + 1>= nums.size()) {
                        found = true;
                        break;
                    }
                }
                if (found == false) {
                    return false;
                }
            }
        }
        return true;
    }
};