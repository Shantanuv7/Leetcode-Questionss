class Solution {
public:
    int myAtoi(string s) {

        long long ans = 0;
        int multint = 1;

        int i = 0;

        while(i < s.size() && s[i] == ' ')
        {
            i++;
        }

        if(i < s.size() && (s[i] == '+' || s[i] == '-'))
        {
            if(s[i] == '-')
            {
                multint = -1;
            }

            i++;
        }

        for(; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int digit = s[i] - '0';

                ans = ans * 10 + digit;

                if(multint == 1 && ans > INT_MAX)
                    return INT_MAX;

                if(multint == -1 && -ans < INT_MIN)
                    return INT_MIN;
            }
            else
            {
                break;
            }
        }

        return ans * multint;
    }
};