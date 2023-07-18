class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Max = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(Max<i) return false;
            Max = max(Max, i+nums[i]);
        }
        return true;
    }
};