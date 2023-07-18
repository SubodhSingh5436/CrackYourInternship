class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //brute force
        // int n = nums.size();

        // vector<vector<int>> ans;
        // set<vector<int>>s;
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         for(int k=j+1;  k<n; k++){
        //             if(nums[i] + nums[j] + nums[k]  == 0){
        //                 s.insert({nums[i], nums[j], nums[k]});
        //             }
        //         }
        //     }
        // }
        // for(auto i:s) ans.push_back(i);
        // return ans;

        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>>set;
        vector<vector<int>> ans;
        for(int i = 0; i<n-2; i++){
            int s = i+1;
            int e = n-1;
            while(s<e){
                if(nums[s]+nums[e]+nums[i]<0){
                    s++;
                }
                else if(nums[s]+nums[e]+nums[i]>0){
                    e--;
                }
                else{
                    set.insert({nums[i], nums[s], nums[e]});
                    s++;
                    e--;
                }
            }
        }
        for(auto i: set) ans.push_back(i);
        return ans;
    }
};