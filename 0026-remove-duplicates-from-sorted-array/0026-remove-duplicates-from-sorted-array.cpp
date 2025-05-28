class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;  // pointer to the last unique element

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // overwrite duplicate
            }
        }

        return i + 1;  // new length of unique elements
    }
};
