class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int,int> ans;

        for ( int i=0; i<n; i++){
            ans[nums[i]]++;
        }

        for( const auto &pair : ans ){
            if(pair.second>=2){
                return pair.first;
            }
        }

        return -1;

    }
};