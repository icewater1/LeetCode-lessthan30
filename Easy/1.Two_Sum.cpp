class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for(int i=0; i< nums.size(); i++)
        {
            for(int j=i+1; j< nums.size(); j++)
            {
                if(target - nums[i] == nums[j])
                {
                    return {i,j};	
					          // Elemerate all combination until meet exact sum
                }
            }
        }
        return result;
    }
};
