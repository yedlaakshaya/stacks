
class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        int freq[26] = {0};
        bool visited[26] = {false};

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (char c : s) {
            freq[c - 'a']--;

            if (visited[c - 'a']) {
                continue;
            }

            while (!st.empty() &&
                   st.top() > c &&
                   freq[st.top() - 'a'] > 0) {
                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            visited[c - 'a'] = true;
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
