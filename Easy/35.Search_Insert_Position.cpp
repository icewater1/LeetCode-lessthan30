class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int tail = nums.size(), head = 0;
        if(nums.front() >= target)return 0;
        if(nums.back() < target)return tail;
        if(nums.back() == target)return tail-1;
        do
        {
            int mid = (head+tail)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target && nums[mid+1] > target) return mid+1;
            else
            {
                if(nums[mid] < target)
                {
                    head = mid;
                }
                else if(nums[mid] > target)
                {
                    tail = mid;
                }
            }

        }while(true);
    }
};