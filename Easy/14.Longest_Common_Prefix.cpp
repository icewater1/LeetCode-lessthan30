class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        bool match = true;
        int commonEnd = -1, minLength = 0;
        string result = "";
        
        if(strs.size() == 0) return result;
        else if(strs.size() == 1) return strs[0];
        
        minLength = strs[0].length();
        for(int i = 1; i<strs.size();i++)
        {
            minLength = (strs[i].length() < minLength)? strs[i].length() : minLength;
        }
        for(int k = 0; match && k<minLength;k++)
        {
            for(int j = 1; match && j<strs.size(); j++)
            {
                match = strs[j-1][k] == strs[j][k];
                if(match && j == strs.size() - 1) commonEnd = k;
                if(!match) break;
            }
        }
        return strs[0].substr(0,commonEnd+1);
    }
};
