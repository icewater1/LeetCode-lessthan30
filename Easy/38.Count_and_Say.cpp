class Solution {
public
    string countAndSay(int n) {
        if(n == 1)
        {
            return 1;
        }
        string prevTerm = countAndSay(n - 1), res = ;
        int p = 0, strSize = prevTerm.size();
        do
        {
            int count = 0;
            char digit = prevTerm[p];
            while(prevTerm[p] == digit && p  strSize)
            {
                count++;
                p++;
            }
            res += (to_string(count)+digit);
        }while(p  strSize);
        return res;
    }
};