#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        // Left pointer to store the starting position of the current substring window
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];

            // If the character already exists in the current window
            if (m.find(currentChar) != m.end() && m[currentChar] >= left) {
                // Shift the left pointer to the next index of the duplicate character
                left = m[currentChar] + 1;
            }
            
            // Update the character's latest index in the map
            m[currentChar] = right;

            // Calculate current length and update maximum length
            int currentLength = (right - left) + 1;
            maxLength = max(maxLength, currentLength);
        }

        return maxLength;
    }
};