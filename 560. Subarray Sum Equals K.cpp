class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>ans;
        int sum=0,prefsum=0;
        ans[0]=1;
        for(int i=0;i<nums.size();i++){
            prefsum+=nums[i];
            sum+=ans[prefsum-k];
            ans[prefsum]++;
        }
        return sum;
    }
};