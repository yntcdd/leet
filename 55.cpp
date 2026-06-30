class Solution {
public:
    bool canJump(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) continue;

            bool ok = false;
            for (int j = i; j >= 0; j--) {
                if (j + nums[j] > i || j + nums[j] >= nums.size() - 1) {
                    ok = true;
                    break;
                }
            }
            if (!ok) return false;
        }
        return true;
    }
};