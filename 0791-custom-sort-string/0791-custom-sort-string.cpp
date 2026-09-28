class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";

        for(int i = 0; i < order.size(); i++)
        {
            for(int j = 0; j < s.size();)
            {
                if(order[i] == s[j])
                {
                    ans.push_back(s[j]);
                    s.erase(j, 1);
                }
                else
                {
                    j++;
                }
            }
        }

        for(int i = 0; i < s.size(); i++)
        {
            ans.push_back(s[i]);
        }

        return ans;
    }
};