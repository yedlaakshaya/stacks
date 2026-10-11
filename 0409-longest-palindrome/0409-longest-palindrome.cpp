class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);

        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool odd = false;

        for (int count : freq) {
            length += (count / 2) * 2;

            if (count % 2 == 1) {
                odd = true;
            }
        }

        if (odd) {
            length++;
        }

        return length;
    }
};