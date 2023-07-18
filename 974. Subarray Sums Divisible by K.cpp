class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;
        unordered_map<int, int> ans;
        ans[0] = 1;
        for( auto i: nums){
            sum += i;
            int rem = sum % k;
            if(rem<0) rem += k;
            if(ans.find(rem) != ans.end()){
                res = res + ans[rem];
            }
            ans[rem]++;
        }
        return res;

    }
};