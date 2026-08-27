class Solution {
public:
    bool isPalindrome(string s) {
        string result1 = "";

        for (int i = 0; i < s.length(); i++) {
            char currentChar = tolower(s[i]);
            // english alphabets & digit
            if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= '0' && currentChar <= '9')) {
                result1 += currentChar;
            }
        }

        string result2 = "";
        for (int i = result1.length() - 1; i >= 0; i--) {
            result2 += result1[i];
        }

        if (result1 == result2) {
            return true;
        } else {
            return false;
        }
    }
};