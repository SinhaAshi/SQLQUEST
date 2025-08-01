class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
vector<int> pos, neg;

        // Separate positive and negative numbers
        for (int num : nums) {
            if (num >= 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }

        vector<int> result;
        int i = 0;

        // Interleave positive and negative
        while (i < pos.size()) {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
            i++;
        }

        return result;
    }
};