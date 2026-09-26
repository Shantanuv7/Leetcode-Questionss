class Solution {
public:
    string removeDuplicates(string s) {

        string ans = "";

        for (int i = 0; i < s.size(); i++)
        {  char ch = s[i];
            if (ans.empty())
            {
                ans.push_back(ch);
            }
            else if (ans.back() != ch)
            {
                ans.push_back(ch);
            }
            else
            {
                ans.pop_back();
            }
        }

        return ans;
    }
};