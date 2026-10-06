class Solution {
public:
    string reorganizeString(string s) {

        int arr[256]={0};

        for(int i =0; i <s.size();i++)
        {
            arr[s[i]]++;
        }

        char max_freq_char;
        int max_freq = INT_MIN;

        for(int i ='a'; i<= 'z';i++)
        {
            if(arr[i] > max_freq)
            {
                max_freq = arr[i];
                max_freq_char =i;
            }
        }

        if(max_freq > (s.size()+1)/2 )
        {
            return "";
        }

        int index =0;

        while(max_freq > 0)
        {
            s[index] = max_freq_char;
            max_freq--;
            arr[max_freq_char]--;
            index+= 2;

        }

        for(int i ='a';i<='z'; i++)
        {
            while(arr[i]>0)
            {
                if(index >= s.size())
                {
                    index = 1;
                }
                

                s[index] =i;
                arr[i]--;
                index += 2;

            }
        }


   return s;

        
    }
};