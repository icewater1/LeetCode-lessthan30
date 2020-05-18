class Solution {
public:
    int getNum(char& symb)
    {
        switch(symb)
        {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
            default:
                return 0;
        }
    }
    int romanToInt(string s) 
    {
        int result = 0, i = 0, j = 0, curSum = 0;
        curSum = getNum(s[i]);
        while(i<s.length()&&j<s.length())
        {
            j = i+1;
            if(getNum(s[i])==getNum(s[j]))
            {
                curSum = !curSum? getNum(s[j])*2 : curSum + getNum(s[j]);
            }
            else if(getNum(s[i])<getNum(s[j]))
            {
                curSum = !curSum? -getNum(s[i]): -curSum;
                curSum += getNum(s[j]);
            }
            else
            {
                if(!curSum)
                {
                    result += getNum(s[i]);
                }
                else
                {
                    result += curSum;
                    curSum = 0;
                }
            }
            i++;
        }
        if(curSum)
        {
            result+=curSum;
        }
        return result;
    }
};
