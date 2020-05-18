class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 0;
        if(!nums.size())    return 0;
        
        for(int i = 0; i < nums.size() ;i++)
        {
            if(nums[i] != nums[len])
            {
                nums[++len]=nums[i];
            }
        }
        return len+1;
    }
};