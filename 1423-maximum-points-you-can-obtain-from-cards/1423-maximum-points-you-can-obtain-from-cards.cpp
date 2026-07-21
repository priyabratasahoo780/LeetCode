class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int leftSum = 0;
        for(int i = 0; i < k; i++){
            leftSum += cardPoints[i];
        }

        int maxSum = leftSum;
        int rightSum = 0;

        for(int left = k - 1, right = n - 1; left >= 0; left--, right--){
            leftSum -= cardPoints[left];
            rightSum += cardPoints[right];

            maxSum = max(maxSum, leftSum + rightSum);
        }

        return maxSum;
    }
};