class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Result store karne ke liye ek vector banayenge
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int sum = 0; // Har naye i ke liye sum reset hoga
            for(int j = 0; j <= i; j++) // Tumhari original condition '<= i' thi
            {
                sum += nums[j]; // Tumhara variable 'nums' hai (num nahi)
            }
            result.push_back(sum); // Har step ka running sum vector mein daal diya
        }
        
        return result; // Aakhir mein vector return kar diya
    }
};