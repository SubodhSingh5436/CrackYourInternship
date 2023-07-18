class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ans;
        int res = 0;
        for(int i=0; i<n;i++){
            ans[nums[i]]++;
        }

        for(const auto& pair: ans){
            if(pair.second > n/2 ){
                res = pair.first;
            }
        }
        return res;
    }
};