class Solution {
public:
    bool isValid(string s) {

        string st = "";

        for (char ch : s) {

            st += ch;

            int n = st.size();

            if (n >= 3 &&
                st[n - 3] == 'a' &&
                st[n - 2] == 'b' &&
                st[n - 1] == 'c') {

                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }

        return st.empty();
    }
};