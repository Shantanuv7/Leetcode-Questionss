class Solution {
public:
    int countpalindrome(string s, int i, int j)
    {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }

        return count;
    }

    int countSubstrings(string s)
    {
        int anscount = 0;

        for(int center = 0; center < s.length(); center++)
        {
            // for odd
            int i = center;
            int j = center;

            int oddcount = countpalindrome(s, i, j);

            // for even
            i = center;
            j = center + 1;

            int evencount = countpalindrome(s, i, j);

            anscount = anscount + oddcount + evencount;
        }

        return anscount;
    }
};