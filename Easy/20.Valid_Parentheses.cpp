class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        bool match = true;
        int commonEnd = 0, minLength = 0;
        string result = "";
        
        if(strs.size() == 0)
        {
            return result;
        }
        else if(strs.size() == 1)
        {
            return strs[0];
        }
        else
        {
            minLength = strs[0].length();
        }
        
        for(int i = 1; i<strs.size();i++)
        {
            int curLen = strs[i].length();
            minLength = (curLen < minLength)? curLen : minLength;
        }
        for(int k = 0; match && k<minLength;k++)
        {
            int j = 1;
            while(match && j<strs.size())
            {
                match = strs[j-1][k] == strs[j][k];
                if(match && j == strs.size() - 1)
                {
                    commonEnd = k;
                    result = strs[j].substr(0,commonEnd+1);
                }
                if(!match)
                {
                    break;
                }
                j++;
            }
        }
        return result;
    }
};