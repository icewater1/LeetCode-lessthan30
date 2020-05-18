class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0, tail = nums.size()-1;
        if(nums.size() <= 1)
        {
            if(nums.size())
            {
                if(nums[0] != val) res++;
            }    
            return res;
        }
        for(int i = 0; i < nums.size() ; i++)
        {
            if( nums[i] == val )
            {
                if(tail > i)
                {
                    while(nums[tail]== val && tail>0)
                    {
                        tail--;
                    }
                    nums[i] = nums[tail];
                    tail--;
                }
            }
            else
            {
                res++;
            }
        }
        return res;
    }
};