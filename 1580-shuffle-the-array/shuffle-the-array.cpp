class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
       int totalSize = nums.size();
       int halfSize = totalSize-n;
       vector<int> result;
       for (int i = 0;i< halfSize;i++)
     {
     result.push_back(nums[i]);
     result.push_back(nums[i+n]);
      }

      return result;
    }

};