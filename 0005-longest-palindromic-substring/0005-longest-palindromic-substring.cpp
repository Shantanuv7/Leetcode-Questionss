class Solution {
public:
    string ans = "";
    string current ="";

    string countpalindrome(string s, int i, int j)
    {
       

        while(i >= 0 && j < s.length() && s[i] == s[j])
        {
            current =s.substr(i, j - i + 1);

            if(ans.size() < current.size())
            {
                ans = current;
            }
            i--;
            j++;

        }

        return ans;
    }

    string longestPalindrome (string s)
    {
    

        for(int center = 0; center < s.length(); center++)
        {
            // for odd
            int i = center;
            int j = center;

            string oddsubstring = countpalindrome(s, i, j);

            // for even
            i = center;
            j = center + 1;

            string evensubstring = countpalindrome(s, i, j);

            
        }
        
        return ans;

       
    }
};