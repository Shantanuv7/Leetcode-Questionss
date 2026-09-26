class Solution {
public:

    bool checkpalindrome(string s,int i, int j)
    {
     
     while(i<j)
     {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
     }
     return true;

    }
    bool validPalindrome(string s) {

        int i =0;
        int j = s.size()-1;


        while(i<j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }

            else
            {
               bool case1 =checkpalindrome(s , i ,j-1);
               bool case2 =checkpalindrome(s , i+1 ,j);
               bool ans = case1 || case2 ;
               return ans;


            }

        }

        return true;
        
    }
};