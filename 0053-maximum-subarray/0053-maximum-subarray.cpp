class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int n = nums.size();
        int best = nums[0];
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = i; j < n; ++j) {
                sum += nums[j];
                best = std::max(best, sum);
            }
        }
        return best;*/

    int currSum = nums[0]; // -2
int maxSum = nums[0];  // -2
for (int i = 1; i < nums.size(); ++i) {
    currSum = max(nums[i], currSum + nums[i]);
    maxSum = max(maxSum, currSum);
}

 return maxSum;  
}
};
