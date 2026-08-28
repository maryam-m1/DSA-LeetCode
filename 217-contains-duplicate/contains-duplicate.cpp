#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // if not found > then add in set
            if (s.find(nums[i]) == s.end()) {
                s.insert(nums[i]);
            }
            // if any number already exists
            else {
                count++;
            }
        }
        
        if (count > 0) {
            return true;
        } else {
            return false;
        }
    }
};