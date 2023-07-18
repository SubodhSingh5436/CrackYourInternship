// two arrays provided who are sorted in icreasing fashion
// n = elements in num1 , m = elements in num2
// 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m, j=0; i<(n+m) , j < n; i++, j++){
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};