class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int n = cardPoints.size();
        std::vector<int> sum(n + 1, 0);

        // Calculate the cumulative sum of the cardPoints array
        for (int i = 1; i <= n; i++) {
            sum[i] = sum[i - 1] + cardPoints[i - 1];
        }

        int maxScore = 0;
        for (int i = 0; i <= k; i++) {
            int leftSum = sum[i];  // Sum of left subarray
            int rightSum = sum[n] - sum[n - (k - i)];  // Sum of right subarray
            maxScore = std::max(maxScore, leftSum + rightSum);
        }

        return maxScore;
    }
};