class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Create a vector to store the running sum result
        vector<int> result;
        int sum = 0;
        
        // Loop through each element in the input vector
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i]; // Add the current element to the running total
           
            result.push_back(sum); // Store the current running sum in the result vector
        }
        
        return result; // Return the final running sum vector
    }
};