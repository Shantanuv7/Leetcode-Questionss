string ordercopyord;
class Solution {
public:

    static bool cmp(char ch1, char ch2)
    {
        return ordercopyord.find(ch1) < ordercopyord.find(ch2);
    }

    string customSortString(string order, string s)
    {
        ordercopyord = order;

        sort(s.begin(), s.end(), cmp); 

        return s;
    }
};