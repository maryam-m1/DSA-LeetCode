class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Handle edge case if the vector is empty
        if (nums.empty()) return 0;
        
        // Insert all elements into an unordered_set to remove duplicates and allow O(1) lookups
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLen = 0;

        // Iterate through each unique number in the set
        for (int n : s) {
            // Check if this number is the start of a consecutive sequence (i.e., n - 1 doesn't exist)
            if (s.find(n - 1) == s.end()) {
                int currentNum = n;
                int currentLen = 1;

                // Count consecutive numbers going forward
                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    currentLen++;
                }

                // Update the maximum length found so far
                maxLen = max(maxLen, currentLen);
            }
        }
        
        return maxLen;
    }
};