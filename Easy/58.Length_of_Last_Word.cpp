class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty() || s == " "){return 0;}
        else
        {
            int pos = s.find_last_of(' ');
            if(pos != -1)
            {
                if(s[pos+1] != '\0')
                {
                    return s.size()-pos-1;
                }
                else
                {
                    return lengthOfLastWord(s.substr(0,pos));
                }
            }
            else
            {
                return s.size();
            }
        }
    }
};