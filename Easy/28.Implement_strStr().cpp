class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
        {
            return 0;
        }
        else
        {
            int windowHead = 0, windowTail = windowHead;
            int strSize = haystack.length()-1, needSize = needle.length()-1;
            int windowSize = windowTail - windowHead;
            while(windowTail <= strSize)
            {
                windowSize = windowTail - windowHead;
                if(haystack.at(windowTail) == needle.at(windowSize))
                {
                    if(windowSize == needSize)return windowHead;
                    windowTail++;
                }
                else
                {
                    windowHead++;
                    windowTail = windowHead;
                }
            }
            return -1;
        }
    }
};