class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> ans;
        for(int i=0; i<n; i++){
            if(ans.find(target-nums[i]) == ans.end()){
                ans[nums[i]] == i;
            }
            else 
                return {ans[target - nums[i]] - i};
        }

        return {-1,-1};
        
    }
};