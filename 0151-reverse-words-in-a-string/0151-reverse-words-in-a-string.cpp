class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int start = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        reverse(s.begin() + start, s.end());

        while(s[0] == ' ')
{
    s.erase(s.begin());
}

while(s[s.size() - 1] == ' ')
{
    s.erase(s.end() - 1);
}

for(int i= 1; i<s.size();i++)
{
    if(s[i]== ' ' && s[i-1]==' ')
    {
        s.erase(s.begin()+i);
        i--;
    }
}


        return s;
    }
};