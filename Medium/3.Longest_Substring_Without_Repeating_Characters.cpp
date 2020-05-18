class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string curr = "";
        string result = "";
        
        for(int i=0; i<s.size();i++)
        {
            bool hasFound = false;
            
            for(int j=0; j<curr.size();j++)
            {
                if(s[i] == curr[j])
                {
                    hasFound = true;
                    break;
                }
            }
            
            if (!hasFound)
            {
                curr += s[i];
            }
            else
            {
               if(curr.size() >= result.size())
                {
                   result = curr;
                   curr = curr.substr(curr.find(s[i])+1);
                   i--;
                }
                else
                {
                    curr = curr.substr(curr.find(s[i])+1) + s[i];
                }
            }
        }
        
        if(curr.size() > result.size())
        {
            result = curr;
        }
        return result.size();
        
    }
};
