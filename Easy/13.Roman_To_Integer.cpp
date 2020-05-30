class Solution {
public:
    int romanToInt(string s) 
    {
        string Syms = "IVXLCDM";
        int Nums[7] = {1,5,10,50,100,500,1000};
        
        if(s.empty())return 0;
        int result = Nums[Syms.find(s[0])], prevNum = result;
        for( int i = 1; i< s.length(); i++)
        {
            int curNum = Nums[Syms.find(s[i])];
            result += curNum;
            if(curNum > prevNum) result -=  2*prevNum;
            prevNum = curNum;
        }
        return result;
    }
};
