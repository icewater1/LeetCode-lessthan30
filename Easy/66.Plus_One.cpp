class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus = 1;
        for(int i = digits.size()-1;plus > 0;i--)
        {
            plus = (digits[i]+1)/10;
            digits[i] = (digits[i]+1)%10;
            if(i == 0)
            {
                if(plus != 0)
                {
                    digits.emplace(digits.begin(),1);
                }
                break;
            }
        }
        return digits;
    }
};