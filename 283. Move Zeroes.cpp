class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;  // Pointer to non-zero elements
        
        // Move all non-zero elements to the beginning of the array
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }
        
        // Fill the remaining elements with zeros
        while (i < n) {
            nums[i] = 0;
            i++;
        }
    }
};