class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;

    sort(nums.begin(),nums.end()) ;
    int n = nums.size();
    int lastSmaller = INT_MIN;
    int cnt = 1;
    int longest = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] - 1 == lastSmaller) {
            cnt += 1;
            lastSmaller = nums[i];
        }
        else if (nums[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

    }
};

/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int longestStreak = 1;
        int currentStreak = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) continue; // skip duplicates
            if(nums[i] == nums[i-1] + 1) {
                currentStreak++;
            } else {
                longestStreak = max(longestStreak, currentStreak);
                currentStreak = 1;
            }
        }
        return max(longestStreak, currentStreak);
    }
};

*/